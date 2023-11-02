
@interface DNDAppAction : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString * _bundleIdentifier;
    bool  _enabled;
    NSData * _encodedAction;
    NSString * _identifier;
    LNAction * _rawAction;
}

@property (nonatomic, readonly, copy) LNAction *action;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, copy) NSData *encodedAction;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) LNAction *rawAction;

+ (id)appActionFromDictionaryRepresentation:(id)arg1;
+ (bool)archivingIsSupported:(id*)arg1;
+ (bool)runtimeIsSupported:(id*)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithAction:(id)arg1 bundleIdentifier:(id)arg2 actionIdentifier:(id)arg3 encodedAction:(id)arg4 enabled:(bool)arg5;
- (id)action;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)effectiveBundleIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)encodedAction;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithAction:(id)arg1 enabled:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithEncodedAction:(id)arg1 actionIdentifier:(id)arg2 bundleIdentifier:(id)arg3 enabled:(bool)arg4;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)rawAction;
- (void)setBundleIdentifier:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setEncodedAction:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setRawAction:(id)arg1;

@end
