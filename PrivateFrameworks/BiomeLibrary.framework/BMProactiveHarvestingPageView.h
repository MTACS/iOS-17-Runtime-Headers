
@interface BMProactiveHarvestingPageView : BMEventBase <BMStoreData> {
    NSString * _content;
    bool  _contentIsReaderText;
    NSString * _contentProtection;
    NSString * _domainID;
    bool  _hasContentIsReaderText;
    bool  _hasRaw_absoluteTimestamp;
    NSString * _personaId;
    double  _raw_absoluteTimestamp;
    NSString * _title;
    NSString * _uniqueID;
    NSString * _url;
}

@property (nonatomic, readonly) NSDate *absoluteTimestamp;
@property (nonatomic, readonly) NSString *content;
@property (nonatomic, readonly) bool contentIsReaderText;
@property (nonatomic, readonly) NSString *contentProtection;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *domainID;
@property (nonatomic) bool hasContentIsReaderText;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *personaId;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *uniqueID;
@property (nonatomic, readonly) NSString *url;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)absoluteTimestamp;
- (id)content;
- (bool)contentIsReaderText;
- (id)contentProtection;
- (unsigned int)dataVersion;
- (id)description;
- (id)domainID;
- (bool)hasContentIsReaderText;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithUniqueID:(id)arg1 domainID:(id)arg2 absoluteTimestamp:(id)arg3 title:(id)arg4 content:(id)arg5 contentIsReaderText:(id)arg6 url:(id)arg7 contentProtection:(id)arg8 personaId:(id)arg9;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)personaId;
- (id)serialize;
- (void)setHasContentIsReaderText:(bool)arg1;
- (id)title;
- (id)uniqueID;
- (id)url;
- (void)writeTo:(id)arg1;

@end
