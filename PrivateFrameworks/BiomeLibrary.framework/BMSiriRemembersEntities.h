
@interface BMSiriRemembersEntities : BMEventBase <BMStoreData> {
    NSArray * _entities;
    NSString * _key;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *entities;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *key;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_entitiesJSONArray;
- (unsigned int)dataVersion;
- (id)description;
- (id)entities;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithKey:(id)arg1 entities:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)key;
- (id)serialize;
- (void)writeTo:(id)arg1;

@end
