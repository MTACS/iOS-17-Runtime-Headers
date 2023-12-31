
@interface AFCreateMessageRequest : AFSiriRequest {
    STSiriMessage * _message;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithMessage:(id)arg1;
- (id)createResponseWithMessageIdentifier:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)message;

@end
