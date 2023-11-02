
@interface BMAppWebUsage : BMEventBase <BMStoreData> {
    NSString * _applicationID;
    NSString * _deviceID;
    bool  _hasIsUsageTrusted;
    bool  _hasRaw_absoluteTimestamp;
    bool  _isUsageTrusted;
    double  _raw_absoluteTimestamp;
    NSString * _safariProfileID;
    NSString * _uniqueID;
    int  _usageState;
    NSString * _webDomain;
    NSString * _webpageURL;
}

@property (nonatomic, readonly) NSDate *absoluteTimestamp;
@property (nonatomic, readonly) NSString *applicationID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceID;
@property (nonatomic) bool hasIsUsageTrusted;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isUsageTrusted;
@property (nonatomic, readonly) NSString *safariProfileID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueID;
@property (nonatomic, readonly) int usageState;
@property (nonatomic, readonly) NSString *webDomain;
@property (nonatomic, readonly) NSString *webpageURL;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)absoluteTimestamp;
- (id)applicationID;
- (unsigned int)dataVersion;
- (id)description;
- (id)deviceID;
- (bool)hasIsUsageTrusted;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithUniqueID:(id)arg1 absoluteTimestamp:(id)arg2 usageState:(int)arg3 webpageURL:(id)arg4 webDomain:(id)arg5 applicationID:(id)arg6 deviceID:(id)arg7 isUsageTrusted:(id)arg8 safariProfileID:(id)arg9;
- (bool)isEqual:(id)arg1;
- (bool)isUsageTrusted;
- (id)jsonDictionary;
- (id)safariProfileID;
- (id)serialize;
- (void)setHasIsUsageTrusted:(bool)arg1;
- (id)uniqueID;
- (int)usageState;
- (id)webDomain;
- (id)webpageURL;
- (void)writeTo:(id)arg1;

@end
