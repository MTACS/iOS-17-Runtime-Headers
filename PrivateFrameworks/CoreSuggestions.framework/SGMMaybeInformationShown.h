
@interface SGMMaybeInformationShown : NSObject {
    PETScalarEventTracker * _tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 extracted:(struct SGMBannerExtractionType_ { unsigned long long x1; })arg2 extractionModelVersion:(unsigned long long)arg3;
- (id)tracker;

@end
