
@interface BCNativeOAuth2Response : NSObject <BCOAuth2ResponseProtocol> {
    NSArray * _errors;
    long long  _status;
    NSString * _token;
}

@property (nonatomic, readonly) NSDictionary *dictionaryValue;
@property (nonatomic, readonly) BCError *error;
@property (nonatomic) long long status;

- (void).cxx_destruct;
- (id)dictionaryValue;
- (id)error;
- (id)initWithToken:(id)arg1 error:(id)arg2;
- (void)setStatus:(long long)arg1;
- (long long)status;

@end
