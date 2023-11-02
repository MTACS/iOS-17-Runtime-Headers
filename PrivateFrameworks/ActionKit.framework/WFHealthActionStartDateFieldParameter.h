
@interface WFHealthActionStartDateFieldParameter : WFDateFieldParameter {
    HKSampleType * _sampleType;
}

@property (nonatomic, retain) HKSampleType *sampleType;

- (void).cxx_destruct;
- (id)localizedLabel;
- (id)sampleType;
- (void)setSampleType:(id)arg1;

@end
