
@interface SGMContactConfirmed : NSObject {
    PETScalarEventTracker * _tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 app:(struct SGMBannerDisplayApp_ { unsigned long long x1; })arg2 firstNameAdj:(struct SGMTypeSafeBool_ { unsigned long long x1; })arg3 lastNameAdj:(struct SGMTypeSafeBool_ { unsigned long long x1; })arg4 middleNameAdj:(struct SGMTypeSafeBool_ { unsigned long long x1; })arg5 isUpdate:(struct SGMTypeSafeBool_ { unsigned long long x1; })arg6 extracted:(struct SGMBannerExtractionType_ { unsigned long long x1; })arg7 extractionModelVersion:(unsigned long long)arg8 selfId:(struct SGMTypeSafeBool_ { unsigned long long x1; })arg9 contactDetail:(struct SGMContactDetailType_ { unsigned long long x1; })arg10;
- (id)tracker;

@end
