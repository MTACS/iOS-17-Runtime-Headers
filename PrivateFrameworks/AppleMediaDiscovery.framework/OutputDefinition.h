
@interface OutputDefinition : NSObject {
    NSString * _mode;
    NSString * _modelOutputName;
    NSNumber * _modelTopN;
    NSArray * _modifiers;
    NSString * _remapDictionaryId;
    NSNumber * _scoreThresholdAsMultipleOfRandomScore;
}

@property (nonatomic, retain) NSString *mode;
@property (nonatomic, retain) NSString *modelOutputName;
@property (nonatomic, retain) NSNumber *modelTopN;
@property (nonatomic, retain) NSArray *modifiers;
@property (nonatomic, retain) NSString *remapDictionaryId;
@property (nonatomic, retain) NSNumber *scoreThresholdAsMultipleOfRandomScore;

- (void).cxx_destruct;
- (id)initWithOutputDefinitionDictionary:(id)arg1;
- (bool)isValid;
- (id)mode;
- (id)modelOutputName;
- (id)modelTopN;
- (id)modifiers;
- (id)remapDictionaryId;
- (id)scoreThresholdAsMultipleOfRandomScore;
- (void)setMode:(id)arg1;
- (void)setModelOutputName:(id)arg1;
- (void)setModelTopN:(id)arg1;
- (void)setModifiers:(id)arg1;
- (void)setRemapDictionaryId:(id)arg1;
- (void)setScoreThresholdAsMultipleOfRandomScore:(id)arg1;

@end
