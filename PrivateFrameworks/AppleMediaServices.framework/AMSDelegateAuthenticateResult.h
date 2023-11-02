
@interface AMSDelegateAuthenticateResult : NSObject <NSSecureCoding> {
    AMSDelegateAuthenticateRequest * _request;
    NSDictionary * _serverResponse;
}

@property (nonatomic, readonly) AMSDelegateAuthenticateRequest *request;
@property (nonatomic, readonly) NSDictionary *serverResponse;
@property (nonatomic, readonly) NSString *token;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServerResponse:(id)arg1;
- (id)request;
- (id)serverResponse;
- (id)token;

@end
