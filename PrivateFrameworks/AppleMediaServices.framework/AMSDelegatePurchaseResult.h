
@interface AMSDelegatePurchaseResult : AMSDelegateAuthenticateResult <NSSecureCoding> {
    AMSDelegatePurchaseRequest * _request;
}

@property (nonatomic, retain) AMSDelegatePurchaseRequest *request;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)request;
- (void)setRequest:(id)arg1;

@end
