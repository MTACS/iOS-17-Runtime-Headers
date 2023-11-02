
@interface _DPPrioAlgorithm : NSObject {
    _DPBiasedCoin * _coin;
    unsigned long long  _dimension;
    double  _epsilon;
    struct { unsigned int *x1; unsigned int *x2; unsigned int *x3; unsigned int *x4; unsigned int *x5; struct _poly_memory {} *x6; } * _prioMemory;
}

@property (nonatomic, readonly) _DPBiasedCoin *coin;
@property (nonatomic, readonly) unsigned long long dimension;
@property (nonatomic, readonly) double epsilon;
@property (nonatomic, readonly) struct { unsigned int *x1; unsigned int *x2; unsigned int *x3; unsigned int *x4; unsigned int *x5; struct _poly_memory {} *x6; }*prioMemory;

+ (id)prioWithEpsilon:(double)arg1 dimensionality:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)coin;
- (void)dealloc;
- (unsigned long long)dimension;
- (double)epsilon;
- (id)initWithEpsilon:(double)arg1 dimensionality:(unsigned long long)arg2;
- (struct { unsigned int *x1; unsigned int *x2; unsigned int *x3; unsigned int *x4; unsigned int *x5; struct _poly_memory {} *x6; }*)prioMemory;
- (id)privatizeDataWithBlock:(id /* block */)arg1;
- (id)privatizeDataWithLocalDP:(bool)arg1 withBlock:(id /* block */)arg2;

@end
