
@interface AFSiriDebugUIRequest : AFSiriRequest {
    bool  _frontmost;
    NSString * _message;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_makeAppFrontmost;
- (id)createResponse;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessage:(id)arg1 makeAppFrontmost:(bool)arg2;
- (id)message;

@end
