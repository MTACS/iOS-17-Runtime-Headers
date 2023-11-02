
@interface HRECharacteristicTriggerTemplate : HRETriggerTemplate {
    bool  _allowMultipleEventsFeature;
    bool  _characteristicPerServiceRule;
    NSArray * _characteristicTypePriority;
    bool  _enforcePriority;
    bool  _singleRecommendationPerSplit;
    NSArray * _triggerCharacteristicValues;
}

@property (nonatomic) bool allowMultipleEventsFeature;
@property (nonatomic) bool characteristicPerServiceRule;
@property (nonatomic, retain) NSArray *characteristicTypePriority;
@property (nonatomic) bool enforcePriority;
@property (nonatomic) bool singleRecommendationPerSplit;
@property (nonatomic, retain) NSArray *triggerCharacteristicValues;

- (void).cxx_destruct;
- (id)_subclass_triggerBuilderForRecommendation:(id)arg1 withObjects:(id)arg2;
- (bool)allowMultipleEventsFeature;
- (bool)characteristicPerServiceRule;
- (id)characteristicTypePriority;
- (bool)enforcePriority;
- (id)init;
- (void)setAllowMultipleEventsFeature:(bool)arg1;
- (void)setCharacteristicPerServiceRule:(bool)arg1;
- (void)setCharacteristicTypePriority:(id)arg1;
- (void)setEnforcePriority:(bool)arg1;
- (void)setSingleRecommendationPerSplit:(bool)arg1;
- (void)setTriggerCharacteristicValues:(id)arg1;
- (bool)singleRecommendationPerSplit;
- (id)triggerCharacteristicValues;

@end
