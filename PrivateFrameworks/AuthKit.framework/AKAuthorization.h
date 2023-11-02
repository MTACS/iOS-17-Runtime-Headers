
@interface AKAuthorization : NSObject <NSSecureCoding> {
    <AKCredentialRequestProtocol> * _authorizedRequest;
    <AKCredential> * _credential;
}

@property (nonatomic, retain) <AKCredentialRequestProtocol> *authorizedRequest;
@property (nonatomic, retain) <AKCredential> *credential;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)authorizedRequest;
- (id)credential;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAuthorizedRequest:(id)arg1;
- (void)setCredential:(id)arg1;

@end
