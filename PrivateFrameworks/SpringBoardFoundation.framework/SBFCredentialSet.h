
@interface SBFCredentialSet : NSObject <NSSecureCoding> {
    struct __ACMHandle { } * _acmContext;
    NSData * _cachedCredentials;
    bool  _ownsContext;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSerializedCredentialSet:(id)arg1;
- (id)serializedCredentialSet;

@end
