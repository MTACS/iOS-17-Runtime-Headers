
@interface DNDModeConfigurationLocationTrigger : DNDModeConfigurationTrigger {
    NSString * _detail;
    CLCircularRegion * _region;
}

@property (nonatomic, readonly, copy) NSString *detail;
@property (nonatomic, readonly, copy) CLCircularRegion *region;

// Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)detail;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasSecureData;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRegion:(id)arg1 detail:(id)arg2 enabledSetting:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)region;

// Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer

+ (id)newWithDictionaryRepresentation:(id)arg1 context:(id)arg2;

- (id)dictionaryRepresentationWithContext:(id)arg1;

@end
