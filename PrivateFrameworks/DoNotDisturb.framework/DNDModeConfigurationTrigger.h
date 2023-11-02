
@interface DNDModeConfigurationTrigger : NSObject <NSCopying, NSSecureCoding> {
    long long  _compatibilityVersion;
    unsigned long long  _enabledSetting;
}

@property (nonatomic, readonly) long long compatibilityVersion;
@property (nonatomic, readonly) unsigned long long enabledSetting;
@property (nonatomic, readonly) bool hasSecureData;
@property (nonatomic, readonly) bool isEnabled;

// Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb

+ (bool)supportsSecureCoding;

- (long long)compatibilityVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)enabledSetting;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasSecureData;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnabledSetting:(unsigned long long)arg1;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer

+ (id)newWithDictionaryRepresentation:(id)arg1 context:(id)arg2;

- (id)dictionaryRepresentationWithContext:(id)arg1;

@end
