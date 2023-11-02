
@interface BMSiriRemembersFieldFieldValue : BMEventBase <BMStoreData> {
    BMSiriRemembersFieldFieldValueBasicValue * _value;
    NSArray * _valueDictionary;
    NSArray * _valueSequence;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BMSiriRemembersFieldFieldValueBasicValue *value;
@property (nonatomic, readonly) NSArray *valueDictionary;
@property (nonatomic, readonly) NSArray *valueSequence;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_valueDictionaryJSONArray;
- (id)_valueSequenceJSONArray;
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithValueSequence:(id)arg1 valueDictionary:(id)arg2 value:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (id)value;
- (id)valueDictionary;
- (id)valueSequence;
- (void)writeTo:(id)arg1;

@end
