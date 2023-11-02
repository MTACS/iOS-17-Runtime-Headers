
@interface AAGenericTermsUIRequest : AARequest {
    ACAccount * _account;
    NSDictionary * _additionalHeaders;
    bool  _preferPassword;
    NSDictionary * _requestDictionary;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, retain) NSDictionary *additionalHeaders;
@property (nonatomic) bool preferPassword;
@property (nonatomic, readonly) NSDictionary *requestDictionary;

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)_requestParamsForTermsEntries:(id)arg1;
- (id)account;
- (id)additionalHeaders;
- (id)initWithAccount:(id)arg1 parameters:(id)arg2;
- (id)initWithAccount:(id)arg1 parameters:(id)arg2 preferPassword:(bool)arg3;
- (id)initWithAccount:(id)arg1 termsEntries:(id)arg2;
- (id)initWithParameters:(id)arg1;
- (id)initWithTermsEntries:(id)arg1;
- (bool)preferPassword;
- (id)requestDictionary;
- (void)setAdditionalHeaders:(id)arg1;
- (void)setPreferPassword:(bool)arg1;
- (id)urlRequest;
- (id)urlString;

@end
