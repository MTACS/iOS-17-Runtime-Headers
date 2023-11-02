
@interface DNDBehaviorSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    unsigned long long  _interruptionBehaviorSetting;
}

@property (nonatomic, readonly) unsigned long long interruptionBehavior;
@property (nonatomic, readonly) unsigned long long interruptionBehaviorSetting;

// Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb

+ (bool)supportsSecureCoding;

- (id)_initWithInterruptionBehaviorSetting:(unsigned long long)arg1;
- (id)_initWithSettings:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)interruptionBehavior;
- (unsigned long long)interruptionBehaviorSetting;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

// Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer

+ (id)settingsForRecord:(id)arg1;

- (id)makeRecord;

@end
