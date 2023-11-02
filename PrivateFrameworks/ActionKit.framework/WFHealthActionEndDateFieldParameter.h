
@interface WFHealthActionEndDateFieldParameter : WFDateFieldParameter {
    HKSampleType * _sampleType;
}

@property (nonatomic, retain) HKSampleType *sampleType;

- (void).cxx_destruct;
- (bool)isHidden;
- (id)sampleType;
- (void)setSampleType:(id)arg1;

@end
