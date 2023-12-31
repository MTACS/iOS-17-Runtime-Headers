
@interface STShowMessageRequest : AFSiriRequest {
    STSiriMessage * _message;
    bool  _showAsDraft;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithMessage:(id)arg1 showAsDraft:(bool)arg2;
- (bool)_makeAppFrontmost;
- (id)createResponse;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)message;
- (bool)showAsDraft;

@end
