
@interface PKPaymentOrderDetails : NSObject <NSSecureCoding> {
    NSString * _authenticationToken;
    NSString * _orderIdentifier;
    NSString * _orderTypeIdentifier;
    NSURL * _webServiceURL;
}

@property (nonatomic, copy) NSString *authenticationToken;
@property (nonatomic, copy) NSString *orderIdentifier;
@property (nonatomic, copy) NSString *orderTypeIdentifier;
@property (nonatomic, copy) NSURL *webServiceURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)authenticationToken;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOrderTypeIdentifier:(id)arg1 orderIdentifier:(id)arg2 webServiceURL:(id)arg3 authenticationToken:(id)arg4;
- (id)orderIdentifier;
- (id)orderTypeIdentifier;
- (void)setAuthenticationToken:(id)arg1;
- (void)setOrderIdentifier:(id)arg1;
- (void)setOrderTypeIdentifier:(id)arg1;
- (void)setWebServiceURL:(id)arg1;
- (id)webServiceURL;

@end
