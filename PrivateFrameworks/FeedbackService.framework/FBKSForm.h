
@interface FBKSForm : NSObject {
    long long  _authenticationMethod;
    FBKSForm_FrameworkPrivateName * _swiftObject;
}

@property (nonatomic) long long authenticationMethod;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) FBKSForm_FrameworkPrivateName *swiftObject;

- (void).cxx_destruct;
- (long long)authenticationMethod;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (void)prefill:(id)arg1 answer:(id)arg2;
- (void)setAuthenticationMethod:(long long)arg1;
- (void)setSwiftObject:(id)arg1;
- (id)swiftObject;

@end
