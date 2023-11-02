
@interface BMAppClipInFocus : BMEventBase <BMStoreData> {
    NSString * _URLHash;
    NSString * _appBundleID;
    NSString * _clipBundleID;
    NSString * _fullURL;
    NSString * _launchReason;
    NSString * _referrerBundleID;
    NSString * _referrerURL;
    NSString * _webAppBundleID;
}

@property (nonatomic, readonly) NSString *URLHash;
@property (nonatomic, readonly) NSString *appBundleID;
@property (nonatomic, readonly) NSString *clipBundleID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *fullURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *launchReason;
@property (nonatomic, readonly) NSString *referrerBundleID;
@property (nonatomic, readonly) NSString *referrerURL;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *webAppBundleID;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)URLHash;
- (id)appBundleID;
- (id)clipBundleID;
- (unsigned int)dataVersion;
- (id)description;
- (id)fullURL;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithURLHash:(id)arg1 clipBundleID:(id)arg2 appBundleID:(id)arg3 webAppBundleID:(id)arg4 launchReason:(id)arg5 fullURL:(id)arg6 referrerURL:(id)arg7 referrerBundleID:(id)arg8;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)launchReason;
- (id)referrerBundleID;
- (id)referrerURL;
- (id)serialize;
- (id)webAppBundleID;
- (void)writeTo:(id)arg1;

@end
