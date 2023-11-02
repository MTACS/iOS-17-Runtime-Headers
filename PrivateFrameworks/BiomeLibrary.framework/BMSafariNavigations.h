
@interface BMSafariNavigations : BMEventBase <BMStoreData> {
    NSString * _countryCode;
    NSString * _domain;
    int  _error;
    bool  _hasPrivacyProxy;
    bool  _hasRaw_visited;
    int  _platform;
    bool  _privacyProxy;
    double  _raw_visited;
    int  _userAgent;
}

@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) int error;
@property (nonatomic) bool hasPrivacyProxy;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int platform;
@property (nonatomic, readonly) bool privacyProxy;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int userAgent;
@property (nonatomic, readonly) NSDate *visited;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)countryCode;
- (unsigned int)dataVersion;
- (id)description;
- (id)domain;
- (int)error;
- (bool)hasPrivacyProxy;
- (id)initByReadFrom:(id)arg1;
- (id)initWithDomain:(id)arg1 visited:(id)arg2 platform:(int)arg3 userAgent:(int)arg4 countryCode:(id)arg5 privacyProxy:(id)arg6 error:(int)arg7;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (int)platform;
- (bool)privacyProxy;
- (id)serialize;
- (void)setHasPrivacyProxy:(bool)arg1;
- (int)userAgent;
- (id)visited;
- (void)writeTo:(id)arg1;

@end
