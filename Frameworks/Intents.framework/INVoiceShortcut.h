
@interface INVoiceShortcut : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _identifier;
    NSString * _invocationPhrase;
    INShortcut * _shortcut;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly, copy) NSString *invocationPhrase;
@property (nonatomic, readonly, copy) INShortcut *shortcut;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)arg1 invocationPhrase:(id)arg2 shortcut:(id)arg3;
- (id)_initWithVCVoiceShortcut:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIntent:(id)arg1;
- (id)initWithUserActivity:(id)arg1;
- (id)intent;
- (id)invocationPhrase;
- (bool)isEqual:(id)arg1;
- (id)shortcut;
- (id)userActivity;

@end
