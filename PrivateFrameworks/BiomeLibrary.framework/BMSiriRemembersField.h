
@interface BMSiriRemembersField : BMEventBase <BMStoreData> {
    NSString * _key;
    BMSiriRemembersFieldFieldValue * _value;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *key;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BMSiriRemembersFieldFieldValue *value;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithKey:(id)arg1 value:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)key;
- (id)serialize;
- (id)value;
- (void)writeTo:(id)arg1;

@end
