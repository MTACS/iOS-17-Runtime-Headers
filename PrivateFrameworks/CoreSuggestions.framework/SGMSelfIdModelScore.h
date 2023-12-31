
@interface SGMSelfIdModelScore : NSObject {
    PETScalarEventTracker * _tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 model:(struct SGMSelfIdModelType_ { unsigned long long x1; })arg2 result:(struct SGMTypeSafeBool_ { unsigned long long x1; })arg3 supervision:(struct SGMSelfIdSupervisionType_ { unsigned long long x1; })arg4 extractionModelVersion:(unsigned long long)arg5;
- (id)tracker;

@end
