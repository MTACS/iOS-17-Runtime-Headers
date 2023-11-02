
@interface BMSafariWebPagePerformance : BMEventBase <BMStoreData> {
    NSString * _domain;
    bool  _hasPrivacyProxy;
    bool  _hasRaw_visited;
    int  _performanceEvent;
    int  _platform;
    bool  _privacyProxy;
    double  _raw_visited;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *domain;
@property (nonatomic) bool hasPrivacyProxy;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int performanceEvent;
@property (nonatomic, readonly) int platform;
@property (nonatomic, readonly) bool privacyProxy;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDate *visited;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (id)domain;
- (bool)hasPrivacyProxy;
- (id)initByReadFrom:(id)arg1;
- (id)initWithDomain:(id)arg1 visited:(id)arg2 platform:(int)arg3 performanceEvent:(int)arg4;
- (id)initWithDomain:(id)arg1 visited:(id)arg2 platform:(int)arg3 performanceEvent:(int)arg4 privacyProxy:(id)arg5;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (int)performanceEvent;
- (int)platform;
- (bool)privacyProxy;
- (id)serialize;
- (void)setHasPrivacyProxy:(bool)arg1;
- (id)visited;
- (void)writeTo:(id)arg1;

@end
