
@interface AMSUISystemImageFetchOperation : AMSUIAssetFetchOperation {
    NSString * _imageName;
    UITraitCollection * _traitCollection;
    NSNumber * _variableValue;
}

@property (nonatomic, retain) NSString *imageName;
@property (nonatomic, retain) UITraitCollection *traitCollection;
@property (nonatomic, retain) NSNumber *variableValue;

- (void).cxx_destruct;
- (id)imageName;
- (id)initWithSystemImageName:(id)arg1 variableValue:(id)arg2 compatibleWithTraitCollection:(id)arg3;
- (bool)isLowLatency;
- (void)main;
- (void)setImageName:(id)arg1;
- (void)setTraitCollection:(id)arg1;
- (void)setVariableValue:(id)arg1;
- (id)traitCollection;
- (id)variableValue;

@end
