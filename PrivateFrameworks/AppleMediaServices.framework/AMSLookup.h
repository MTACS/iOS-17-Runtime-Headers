
@interface AMSLookup : AMSTask <AMSBagConsumer> {
    <AMSBagProtocol> * _bag;
    NSString * _caller;
    AMSProcessInfo * _clientInfo;
    NSString * _imageProfile;
    NSString * _keyProfile;
    NSString * _language;
    NSString * _platform;
    long long  _signatureType;
    long long  _version;
}

@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, retain) NSString *caller;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *imageProfile;
@property (nonatomic, retain) NSString *keyProfile;
@property (nonatomic, retain) NSString *language;
@property (nonatomic, retain) NSString *platform;
@property (nonatomic) long long signatureType;
@property (readonly) Class superclass;
@property (nonatomic) long long version;

+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (void)_addJSSignatureToRequest:(id)arg1;
- (id)_compileQueryParametersWithBundleIds:(id)arg1 itemIds:(id)arg2;
- (id)bag;
- (id)caller;
- (id)clientInfo;
- (id)contract;
- (id)imageProfile;
- (id)initWithBag:(id)arg1 caller:(id)arg2 keyProfile:(id)arg3;
- (id)initWithBagContract:(id)arg1;
- (id)initWithBagContract:(id)arg1 caller:(id)arg2 keyProfile:(id)arg3;
- (id)keyProfile;
- (id)language;
- (id)performLookupWithBundleIdentifiers:(id)arg1 itemIdentifiers:(id)arg2;
- (id)platform;
- (void)setBag:(id)arg1;
- (void)setCaller:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setContract:(id)arg1;
- (void)setImageProfile:(id)arg1;
- (void)setKeyProfile:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setPlatform:(id)arg1;
- (void)setSignatureType:(long long)arg1;
- (void)setVersion:(long long)arg1;
- (long long)signatureType;
- (long long)version;

@end
