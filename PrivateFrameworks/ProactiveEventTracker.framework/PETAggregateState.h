
@interface PETAggregateState : NSObject {
    struct { 
        unsigned long long s[2]; 
    }  _rng;
    PETAggregateStateStorage * _storage;
}

+ (unsigned char)hashForString:(id)arg1;

- (void).cxx_destruct;
- (bool)checkIntegrity;
- (id)description;
- (void)enumerateAndResetCounters:(id /* block */)arg1 distributions:(id /* block */)arg2;
- (void)enumerateCounters:(id /* block */)arg1 distributions:(id /* block */)arg2;
- (void)incrementCounterBy:(double)arg1 forKey:(id)arg2;
- (void)incrementCounterBy:(double)arg1 forKey:(const void*)arg2 keyLength:(unsigned short)arg3;
- (id)init;
- (id)initInMemory;
- (id)initWithPath:(id)arg1;
- (id)initWithStorage:(id)arg1;
- (void)reset;
- (void)updateCounterTo:(double)arg1 forKey:(id)arg2;
- (void)updateCounterTo:(double)arg1 forKey:(const void*)arg2 keyLength:(unsigned short)arg3;
- (void)updateDistributionWithValue:(double)arg1 forKey:(const void*)arg2 keyLength:(unsigned short)arg3 maxSampleSize:(unsigned short)arg4;
- (void)updateDistributionWithValue:(double)arg1 forKey:(id)arg2 maxSampleSize:(unsigned short)arg3;

@end
