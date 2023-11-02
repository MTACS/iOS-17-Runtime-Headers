
@interface HRETriggerTemplate : HREActionTemplate {
    <HFIconDescriptor> * _defaultIconDescriptor;
    NSDictionary * _iconDescriptorsByTriggerCharacteristic;
}

@property (nonatomic, retain) <HFIconDescriptor> *defaultIconDescriptor;
@property (nonatomic, retain) NSDictionary *iconDescriptorsByTriggerCharacteristic;

- (void).cxx_destruct;
- (id)_subclass_triggerBuilderForRecommendation:(id)arg1 withObjects:(id)arg2;
- (id)defaultIconDescriptor;
- (id)iconDescriptorForRecommendation:(id)arg1 withObjects:(id)arg2;
- (id)iconDescriptorsByTriggerCharacteristic;
- (Class)recommendationClass;
- (void)setDefaultIconDescriptor:(id)arg1;
- (void)setIconDescriptorsByTriggerCharacteristic:(id)arg1;
- (id)triggerBuilderForRecommendation:(id)arg1 withObjects:(id)arg2;

@end
