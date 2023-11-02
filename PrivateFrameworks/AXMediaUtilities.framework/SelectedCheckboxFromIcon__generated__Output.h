
@interface SelectedCheckboxFromIcon__generated__Output : NSObject <MLFeatureProvider> {
    NSString * _label;
    NSDictionary * _labelProbability;
}

@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, retain) NSDictionary *labelProbability;

- (void).cxx_destruct;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithLabelProbability:(id)arg1 label:(id)arg2;
- (id)label;
- (id)labelProbability;
- (void)setLabel:(id)arg1;
- (void)setLabelProbability:(id)arg1;

@end
