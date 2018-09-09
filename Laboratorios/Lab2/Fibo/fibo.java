/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author origa
 */


public class fibo {
    
    static short fiboS(short n){
        short a = 0, b = 1, f = 0,i;
        if(n<2)return n;
        for(i = 1; i<n; i++){
            f = (short) (a+b);
            a = b;
            b = f;
        }
        return f;
    }

    static int fiboI(int n){
        int a = 0, b = 1, f = 0,i;
        if(n<2)return n;
        for(i = 1; i<n; i++){
            f = a+b;
            a = b;
            b = f;
        }
        return f;
    }

    static float fiboF(float n){
        float a = 0, b = 1, f = 0,i;
        if(n<2)return n;
        for(i = 1; i<n; i++){
            f = a+b;
            a = b;
            b = f;
        }
        return f;
    }

    static long fiboL(long n){
        long a = 0, b = 1, f = 0, i;
        if(n<2)return n;
        for(i = 1; i<n; i++){
            f = a+b;
            a = b;
            b = f;
        }
        return f;
    }


    static double fiboD(double n){
        double a = 0, b = 1, f = 0,i;
        if(n<2)return n;
        for(i = 1; i<n; i++){
            f = a+b;
            a = b;
            b = f;
        }
        return f;
    }

    public static void main(String[] args) {
        System.out.println("FiboShort(" + 23 + ") "+ fiboS((short)24));
        System.out.println("FiboInt(" + 46 + ") "+ fiboI((int)47));
        System.out.println("FiboFloat(" + 37 + ") "+ fiboF((float)37));
        System.out.println("FiboLong(" + 93 + ") "+ fiboL((long)93));
        System.out.println("FiboDouble(" + 1477 + ") "+ fiboD((double)1477));
    }
    
}
