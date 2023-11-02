
@interface CEMSystemWebContentFilterDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadAutoFilterEnabled;
    NSArray * _payloadBlacklistedURLs;
    NSString * _payloadCertificate;
    NSNumber * _payloadFilterBrowsers;
    NSNumber * _payloadFilterSockets;
    NSString * _payloadFilterType;
    NSString * _payloadOrganization;
    NSString * _payloadPassword;
    NSArray * _payloadPermittedURLs;
    NSString * _payloadPluginBundleID;
    NSString * _payloadServerAddress;
    NSString * _payloadUserDefinedName;
    NSString * _payloadUserName;
    CEMAnyPayload * _payloadVendorConfig;
    NSArray * _payloadWhitelistedBookmarks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadAutoFilterEnabled;
@property (nonatomic, copy) NSArray *payloadBlacklistedURLs;
@property (nonatomic, copy) NSString *payloadCertificate;
@property (nonatomic, copy) NSNumber *payloadFilterBrowsers;
@property (nonatomic, copy) NSNumber *payloadFilterSockets;
@property (nonatomic, copy) NSString *payloadFilterType;
@property (nonatomic, copy) NSString *payloadOrganization;
@property (nonatomic, copy) NSString *payloadPassword;
@property (nonatomic, copy) NSArray *payloadPermittedURLs;
@property (nonatomic, copy) NSString *payloadPluginBundleID;
@property (nonatomic, copy) NSString *payloadServerAddress;
@property (nonatomic, copy) NSString *payloadUserDefinedName;
@property (nonatomic, copy) NSString *payloadUserName;
@property (nonatomic, copy) CEMAnyPayload *payloadVendorConfig;
@property (nonatomic, copy) NSArray *payloadWhitelistedBookmarks;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withFilterType:(id)arg2 withAutoFilterEnabled:(id)arg3 withPermittedURLs:(id)arg4 withBlacklistedURLs:(id)arg5 withWhitelistedBookmarks:(id)arg6 withUserDefinedName:(id)arg7 withPluginBundleID:(id)arg8 withServerAddress:(id)arg9 withUserName:(id)arg10 withPassword:(id)arg11 withCertificate:(id)arg12 withOrganization:(id)arg13 withVendorConfig:(id)arg14 withFilterBrowsers:(id)arg15 withFilterSockets:(id)arg16;
+ (id)profileType;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;

- (void).cxx_destruct;
- (int)activationLevel;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (bool)multipleAllowed;
- (bool)mustBeSupervised;
- (id)payloadAutoFilterEnabled;
- (id)payloadBlacklistedURLs;
- (id)payloadCertificate;
- (id)payloadFilterBrowsers;
- (id)payloadFilterSockets;
- (id)payloadFilterType;
- (id)payloadOrganization;
- (id)payloadPassword;
- (id)payloadPermittedURLs;
- (id)payloadPluginBundleID;
- (id)payloadServerAddress;
- (id)payloadUserDefinedName;
- (id)payloadUserName;
- (id)payloadVendorConfig;
- (id)payloadWhitelistedBookmarks;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAutoFilterEnabled:(id)arg1;
- (void)setPayloadBlacklistedURLs:(id)arg1;
- (void)setPayloadCertificate:(id)arg1;
- (void)setPayloadFilterBrowsers:(id)arg1;
- (void)setPayloadFilterSockets:(id)arg1;
- (void)setPayloadFilterType:(id)arg1;
- (void)setPayloadOrganization:(id)arg1;
- (void)setPayloadPassword:(id)arg1;
- (void)setPayloadPermittedURLs:(id)arg1;
- (void)setPayloadPluginBundleID:(id)arg1;
- (void)setPayloadServerAddress:(id)arg1;
- (void)setPayloadUserDefinedName:(id)arg1;
- (void)setPayloadUserName:(id)arg1;
- (void)setPayloadVendorConfig:(id)arg1;
- (void)setPayloadWhitelistedBookmarks:(id)arg1;

@end
