
@interface MKHTTPProxyAuthorization : NSObject {
    NSString * _identifier;
    NSString * _signature;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *signature;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithHeaderValue:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSignature:(id)arg1;
- (id)signature;

@end
