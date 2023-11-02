
@interface BMProactiveHarvestingParsecSearch : BMEventBase <BMStoreData> {
    NSString * _completedQuery;
    NSString * _contentProtection;
    NSString * _domainID;
    NSArray * _entities;
    bool  _hasRaw_absoluteTimestamp;
    NSString * _personaId;
    double  _raw_absoluteTimestamp;
    NSString * _resultID;
    NSString * _uniqueID;
    NSString * _userInput;
}

@property (nonatomic, readonly) NSDate *absoluteTimestamp;
@property (nonatomic, readonly) NSString *completedQuery;
@property (nonatomic, readonly) NSString *contentProtection;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *domainID;
@property (nonatomic, readonly) NSArray *entities;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *personaId;
@property (nonatomic, readonly) NSString *resultID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueID;
@property (nonatomic, readonly) NSString *userInput;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_entitiesJSONArray;
- (id)absoluteTimestamp;
- (id)completedQuery;
- (id)contentProtection;
- (unsigned int)dataVersion;
- (id)description;
- (id)domainID;
- (id)entities;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithResultID:(id)arg1 domainID:(id)arg2 absoluteTimestamp:(id)arg3 userInput:(id)arg4 completedQuery:(id)arg5 entities:(id)arg6 uniqueID:(id)arg7 contentProtection:(id)arg8 personaId:(id)arg9;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)personaId;
- (id)resultID;
- (id)serialize;
- (id)uniqueID;
- (id)userInput;
- (void)writeTo:(id)arg1;

@end
