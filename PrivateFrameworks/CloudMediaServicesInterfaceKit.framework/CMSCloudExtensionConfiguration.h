
@interface CMSCloudExtensionConfiguration : NSObject {
    NSURL * _baseURL;
    NSDictionary * _configDictionary;
    NSDate * _configExpiry;
    NSURL * _configUrl;
    NSMutableDictionary * _endpointConfigs;
    NSDictionary * _globalHeaders;
    NSString * _languageCode;
    CMSNetworkActivity * _parentNetworkActivity;
    NSError * _parsingError;
    NSString * _version;
}

@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic, retain) NSDictionary *configDictionary;
@property (nonatomic, retain) NSDate *configExpiry;
@property (nonatomic, readonly) NSURL *configUrl;
@property (nonatomic, retain) NSMutableDictionary *endpointConfigs;
@property (getter=isExpiringSoon, nonatomic, readonly) bool expiringSoon;
@property (nonatomic, readonly) NSDictionary *globalHeaders;
@property (nonatomic, readonly) NSString *languageCode;
@property (nonatomic, readonly) CMSNetworkActivity *parentNetworkActivity;
@property (nonatomic, readonly) NSError *parsingError;
@property (nonatomic, readonly) NSString *version;

+ (id)_configurationFromJWS:(id)arg1 URL:(id)arg2 parentNetworkActivity:(id)arg3 keyID:(id)arg4 publicKey:(id)arg5 languageCode:(id)arg6 error:(id*)arg7;
+ (void)configurationFromURL:(id)arg1 forSession:(id)arg2 usingAuth:(id)arg3 authProvider:(id)arg4 parentNetworkActivity:(id)arg5 keyID:(id)arg6 publicKey:(id)arg7 URLSessionConfiguration:(id)arg8 languageCode:(id)arg9 completion:(id /* block */)arg10;

- (void).cxx_destruct;
- (void)_configureEndpoint:(id)arg1 withDictionary:(id)arg2 headers:(id)arg3;
- (id)baseURL;
- (id)configDictionary;
- (id)configExpiry;
- (id)configForEndpoint:(id)arg1;
- (id)configUrl;
- (id)description;
- (id)endpointConfigs;
- (id)globalHeaders;
- (id)init;
- (id)initWithDictionary:(id)arg1 fromURL:(id)arg2 parentNetworkActivity:(id)arg3 languageCode:(id)arg4;
- (bool)isExpiringSoon;
- (id)languageCode;
- (id)parentNetworkActivity;
- (id)parsingError;
- (void)setBaseURL:(id)arg1;
- (void)setConfigDictionary:(id)arg1;
- (void)setConfigExpiry:(id)arg1;
- (void)setEndpointConfigs:(id)arg1;
- (id)version;

@end
