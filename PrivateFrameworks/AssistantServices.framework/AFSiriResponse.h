
@interface AFSiriResponse : NSObject <NSSecureCoding> {
    NSUUID * _requestIdentifier;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithRequest:(id)arg1;
- (id)_initWithRequestIdentifier:(id)arg1;
- (bool)_isForRequest:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
