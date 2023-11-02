
@interface BCServerSideOAuth2Response : NSObject <BCOAuth2ResponseProtocol> {
    BCError * _error;
    long long  _status;
}

@property (nonatomic, readonly) NSDictionary *dictionaryValue;
@property (nonatomic, retain) BCError *error;
@property (nonatomic) long long status;

- (void).cxx_destruct;
- (id)_initWithDictionary:(id)arg1;
- (id)dictionaryValue;
- (id)error;
- (id)initWithRedirectURI:(id)arg1;
- (void)setError:(id)arg1;
- (void)setStatus:(long long)arg1;
- (long long)status;

@end
