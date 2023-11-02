
@interface PXTimeAnimateValue : NSObject {
    NSString * mFormula;
    bool  mHasPercentTime;
    double  mPercentTime;
    id  mVariant;
}

- (void).cxx_destruct;
- (id)formula;
- (bool)hasPercentTime;
- (id)init;
- (double)percentTime;
- (void)setFormula:(id)arg1;
- (void)setPercentTime:(double)arg1;
- (void)setVariant:(id)arg1;
- (id)variant;

@end
