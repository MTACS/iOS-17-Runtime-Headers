
@interface _REValueRuleCondition : RECondition <REAutomaticExportedInterface> {
    bool  _allowsEmptyValueForFeature;
    REFeature * _feature;
    long long  _relation;
    unsigned long long  _value;
}

@property (nonatomic, readonly) REFeature *feature;
@property (nonatomic, readonly) long long relation;
@property (nonatomic, readonly) unsigned long long value;

- (void).cxx_destruct;
- (bool)_acceptsFeatureMap:(id)arg1 predictionSet:(id)arg2 explanation:(id*)arg3;
- (id)_dependentFeatures;
- (id)_inflectionFeatureValuePairs;
- (id)_notCondition;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)feature;
- (unsigned long long)hash;
- (id)initWithFeature:(id)arg1 relation:(long long)arg2 value:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (long long)relation;
- (unsigned long long)value;

@end
