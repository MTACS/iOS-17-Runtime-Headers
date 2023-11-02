
@interface DNDBypassSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString * _immediateBypassCNGroupIdentifier;
    unsigned long long  _immediateBypassEventSourceType;
    unsigned long long  _repeatEventSourceBehaviorEnabledSetting;
}

@property (nonatomic, readonly, copy) NSString *immediateBypassCNGroupIdentifier;
@property (nonatomic, readonly) unsigned long long immediateBypassEventSourceType;
@property (nonatomic, readonly) unsigned long long repeatEventSourceBehaviorEnabledSetting;

// Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithImmediateBypassEventSourceType:(unsigned long long)arg1 immediateBypassCNGroupIdentifier:(id)arg2 repeatEventSourceBehaviorEnabledSetting:(unsigned long long)arg3;
- (id)_initWithSettings:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)diffDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)immediateBypassCNGroupIdentifier;
- (unsigned long long)immediateBypassEventSourceType;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)repeatEventSourceBehaviorEnabledSetting;

// Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer

+ (id)settingsForRecord:(id)arg1;

- (id)makeRecord;

@end
