
@interface BMProactiveHarvestingQuery : BMEventBase <BMStoreData> {
    NSString * _contentProtection;
    bool  _hasRaw_absoluteTimestamp;
    NSString * _personaId;
    NSString * _query;
    double  _raw_absoluteTimestamp;
    NSArray * _results;
    NSString * _uniqueID;
}

@property (nonatomic, readonly) NSDate *absoluteTimestamp;
@property (nonatomic, readonly) NSString *contentProtection;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *personaId;
@property (nonatomic, readonly) NSString *query;
@property (nonatomic, readonly) NSArray *results;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueID;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_resultsJSONArray;
- (id)absoluteTimestamp;
- (id)contentProtection;
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithAbsoluteTimestamp:(id)arg1 query:(id)arg2 results:(id)arg3 uniqueID:(id)arg4 contentProtection:(id)arg5 personaId:(id)arg6;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)personaId;
- (id)query;
- (id)results;
- (id)serialize;
- (id)uniqueID;
- (void)writeTo:(id)arg1;

@end
