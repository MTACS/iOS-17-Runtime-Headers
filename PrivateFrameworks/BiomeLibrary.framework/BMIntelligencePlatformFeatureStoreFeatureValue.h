
@interface BMIntelligencePlatformFeatureStoreFeatureValue : BMEventBase <BMStoreData> {
    BMIntelligencePlatformFeatureStoreFeatureValueBasicValue * _value;
    NSArray * _value_dictionary;
    NSArray * _value_sequence;
    NSArray * _value_sequence_shape;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BMIntelligencePlatformFeatureStoreFeatureValueBasicValue *value;
@property (nonatomic, readonly) NSArray *value_dictionary;
@property (nonatomic, readonly) NSArray *value_sequence;
@property (nonatomic, readonly) NSArray *value_sequence_shape;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_value_dictionaryJSONArray;
- (id)_value_sequenceJSONArray;
- (id)_value_sequence_shapeJSONArray;
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithValue_sequence:(id)arg1 value_sequence_shape:(id)arg2 value_dictionary:(id)arg3 value:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (id)value;
- (id)value_dictionary;
- (id)value_sequence;
- (id)value_sequence_shape;
- (void)writeTo:(id)arg1;

@end
