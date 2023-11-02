
@interface BMProactiveHarvestingNewsArticle : BMEventBase <BMStoreData> {
    NSString * _content;
    NSString * _contentProtection;
    NSString * _domainID;
    bool  _hasRaw_absoluteTimestamp;
    NSString * _personaId;
    NSString * _publication;
    double  _raw_absoluteTimestamp;
    NSString * _summary;
    NSString * _title;
    NSString * _uniqueID;
}

@property (nonatomic, readonly) NSDate *absoluteTimestamp;
@property (nonatomic, readonly) NSString *content;
@property (nonatomic, readonly) NSString *contentProtection;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *domainID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *personaId;
@property (nonatomic, readonly) NSString *publication;
@property (nonatomic, readonly) NSString *summary;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *uniqueID;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)absoluteTimestamp;
- (id)content;
- (id)contentProtection;
- (unsigned int)dataVersion;
- (id)description;
- (id)domainID;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithUniqueID:(id)arg1 domainID:(id)arg2 absoluteTimestamp:(id)arg3 title:(id)arg4 content:(id)arg5 summary:(id)arg6 publication:(id)arg7 contentProtection:(id)arg8 personaId:(id)arg9;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)personaId;
- (id)publication;
- (id)serialize;
- (id)summary;
- (id)title;
- (id)uniqueID;
- (void)writeTo:(id)arg1;

@end
