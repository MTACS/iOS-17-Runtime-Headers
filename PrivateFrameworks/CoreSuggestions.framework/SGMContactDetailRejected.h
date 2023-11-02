
@interface SGMContactDetailRejected : NSObject {
    PETScalarEventTracker * _tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 type:(struct SGMContactDetailType_ { unsigned long long x1; })arg2 extracted:(struct SGMDetailExtractionType_ { unsigned long long x1; })arg3 extractionModelVersion:(unsigned long long)arg4;
- (id)tracker;

@end
