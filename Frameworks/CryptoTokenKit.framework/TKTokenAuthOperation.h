
@interface TKTokenAuthOperation : NSObject <NSSecureCoding> {
    NSError * _authenticationError;
}

@property (copy) NSError *authenticationError;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)authenticationError;
- (Class)baseClassForUI;
- (void)encodeWithCoder:(id)arg1;
- (bool)finishWithError:(id*)arg1;
- (void)importOperation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAuthenticationError:(id)arg1;

@end
