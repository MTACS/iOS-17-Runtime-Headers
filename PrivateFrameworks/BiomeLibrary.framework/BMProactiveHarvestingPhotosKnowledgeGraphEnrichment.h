
@interface BMProactiveHarvestingPhotosKnowledgeGraphEnrichment : BMEventBase <BMStoreData> {
    NSString * _contentProtection;
    NSArray * _entities;
    bool  _hasRaw_absoluteTimestamp;
    NSArray * _locations;
    NSString * _personaId;
    double  _raw_absoluteTimestamp;
    NSArray * _topics;
    NSString * _uniqueID;
}

@property (nonatomic, readonly) NSDate *absoluteTimestamp;
@property (nonatomic, readonly) NSString *contentProtection;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *entities;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *locations;
@property (nonatomic, readonly) NSString *personaId;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *topics;
@property (nonatomic, readonly) NSString *uniqueID;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_entitiesJSONArray;
- (id)_locationsJSONArray;
- (id)_topicsJSONArray;
- (id)absoluteTimestamp;
- (id)contentProtection;
- (unsigned int)dataVersion;
- (id)description;
- (id)entities;
- (id)initByReadFrom:(id)arg1;
- (id)initWithAbsoluteTimestamp:(id)arg1 topics:(id)arg2 entities:(id)arg3 locations:(id)arg4 uniqueID:(id)arg5 contentProtection:(id)arg6 personaId:(id)arg7;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)locations;
- (id)personaId;
- (id)serialize;
- (id)topics;
- (id)uniqueID;
- (void)writeTo:(id)arg1;

@end
