
@interface SGMContactCreated : NSObject {
    PETScalarEventTracker * _tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 wasSuggestedContact:(struct SGMTypeSafeBool_ { unsigned long long x1; })arg2 app:(struct SGMContactDetailUsedApp_ { unsigned long long x1; })arg3;
- (id)tracker;

@end
