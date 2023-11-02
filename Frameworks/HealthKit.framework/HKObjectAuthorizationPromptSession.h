
@interface HKObjectAuthorizationPromptSession : NSObject <NSSecureCoding> {
    NSString * _bundleIdentifier;
    NSUUID * _sessionIdentifier;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSUUID *sessionIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initForBundleIdentifier:(id)arg1 sessionIdentifier:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)sessionIdentifier;

@end
