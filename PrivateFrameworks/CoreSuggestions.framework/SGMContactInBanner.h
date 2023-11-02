
@interface SGMContactInBanner : NSObject {
    PETScalarEventTracker * _tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 app:(struct SGMBannerDisplayApp_ { unsigned long long x1; })arg2 extracted:(struct SGMBannerExtractionType_ { unsigned long long x1; })arg3 selfId:(struct SGMTypeSafeBool_ { unsigned long long x1; })arg4 extractionModelVersion:(unsigned long long)arg5 contactDetail:(struct SGMContactDetailType_ { unsigned long long x1; })arg6;
- (id)tracker;

@end
