
@interface SGMEventICSOpportunity : NSObject {
    PETScalarEventTracker * _tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 source:(struct SGMEventICSSourceType_ { unsigned long long x1; })arg2 recipient:(struct SGMEventICSSourceType_ { unsigned long long x1; })arg3 accountSetup:(struct SGMTypeSafeBool_ { unsigned long long x1; })arg4;
- (id)tracker;

@end
