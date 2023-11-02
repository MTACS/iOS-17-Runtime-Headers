
@interface BMSiriRemembersEntitiesSiriRemembersEntity : BMEventBase <BMStoreData> {
    NSArray * _entityFields;
    NSString * _fields;
    NSString * _fieldsTokens;
    NSString * _identifier;
    NSString * _type;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *entityFields;
@property (nonatomic, readonly) NSString *fields;
@property (nonatomic, readonly) NSString *fieldsTokens;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *type;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_entityFieldsJSONArray;
- (unsigned int)dataVersion;
- (id)description;
- (id)entityFields;
- (id)fields;
- (id)fieldsTokens;
- (id)identifier;
- (id)initByReadFrom:(id)arg1;
- (id)initWithIdentifier:(id)arg1 type:(id)arg2 entityFields:(id)arg3;
- (id)initWithIdentifier:(id)arg1 type:(id)arg2 entityFields:(id)arg3 fields:(id)arg4 fieldsTokens:(id)arg5;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (id)type;
- (void)writeTo:(id)arg1;

@end
