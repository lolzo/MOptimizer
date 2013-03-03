//
//  IFunction.h
//  MOptimizer
//
//  Created by Nicholas Yasnov on 03.03.13.
//  Copyright (c) 2013 efpies. All rights reserved.
//

#ifndef __MOptimizer__IFunction__
#define __MOptimizer__IFunction__

class Point;

class IFunction {
public:
    class DimensionException {
    public:
        DimensionException() { }
    };
    
    virtual double value(const Point &point) const = 0;
    virtual short dimensions() const = 0;
};

#endif /* defined(__MOptimizer__IFunction__) */
