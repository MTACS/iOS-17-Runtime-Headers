
@interface STSendEmailRequest : AFSiriRequest {
    STEmailMessage * _message;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithMessage:(id)arg1;
- (bool)_makeAppFrontmost;
- (id)createResponse;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)message;

@end
