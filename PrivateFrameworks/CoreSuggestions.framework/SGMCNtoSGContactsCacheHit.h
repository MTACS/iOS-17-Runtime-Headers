
@interface SGMCNtoSGContactsCacheHit : NSObject {
    PETScalarEventTracker * _tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 cacheHit:(struct SGMTypeSafeBool_ { unsigned long long x1; })arg2;
- (id)tracker;

@end
