
@interface CKDGlobalConfigurationURLRequest : CKDURLRequest {
    CKDServerConfiguration * _configuration;
}

@property (nonatomic, retain) CKDServerConfiguration *configuration;

- (void).cxx_destruct;
- (id)additionalHeaderValues;
- (bool)allowsAnonymousAccount;
- (id)configuration;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (bool)hasRequestBody;
- (id)httpMethod;
- (long long)partitionType;
- (void)requestDidParsePlistObject:(id)arg1;
- (bool)requiresConfiguration;
- (bool)requiresDeviceID;
- (long long)serverType;
- (void)setConfiguration:(id)arg1;
- (id)url;

@end
