
@interface AMSMediaRequestEncoder : NSObject <AMSBagConsumer, AMSRequestEncoding> {
    bool  _disableAccountMediaTypeComponent;
    AMSURLRequestEncoder * _requestEncoder;
    <AMSMediaTokenServiceProtocol> * _tokenService;
}

@property (nonatomic) bool URLKnownToBeTrusted;
@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, readonly) <AMSBagProtocol> *bag;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableAccountMediaTypeComponent;
@property (nonatomic) bool disableResponseDecoding;
@property (nonatomic, retain) NSString *gsTokenIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *logKey;
@property (nonatomic, readonly) AMSURLRequestEncoder *requestEncoder;
@property long long requestEncoding;
@property (nonatomic, retain) <AMSResponseDecoding> *responseDecoder;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <AMSMediaTokenServiceProtocol> *tokenService;

+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (bool)URLKnownToBeTrusted;
- (id)account;
- (id)bag;
- (id)clientInfo;
- (bool)disableAccountMediaTypeComponent;
- (bool)disableResponseDecoding;
- (id)gsTokenIdentifier;
- (id)initWithTokenService:(id)arg1 bag:(id)arg2;
- (id)logKey;
- (id)requestByEncodingRequest:(id)arg1 parameters:(id)arg2;
- (id)requestEncoder;
- (long long)requestEncoding;
- (id)requestWithComponents:(id)arg1;
- (id)requestWithURL:(id)arg1;
- (id)responseDecoder;
- (void)setAccount:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setDisableAccountMediaTypeComponent:(bool)arg1;
- (void)setDisableResponseDecoding:(bool)arg1;
- (void)setGsTokenIdentifier:(id)arg1;
- (void)setLogKey:(id)arg1;
- (void)setRequestEncoding:(long long)arg1;
- (void)setResponseDecoder:(id)arg1;
- (void)setURLKnownToBeTrusted:(bool)arg1;
- (id)tokenService;

@end
