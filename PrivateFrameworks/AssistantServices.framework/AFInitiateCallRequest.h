
@interface AFInitiateCallRequest : AFSiriRequest {
    STCall * _call;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithCall:(id)arg1;
- (id)call;
- (id)createResponse;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
