
@interface DNDModeConfiguration : NSObject <DNDDiffBuilding, NSCopying, NSMutableCopying, NSSecureCoding> {
    bool  _automaticallyGenerated;
    long long  _compatibilityVersion;
    DNDConfiguration * _configuration;
    NSDate * _created;
    unsigned long long  _dimsLockScreen;
    bool  _hasSecureData;
    unsigned long long  _impactsAvailability;
    NSDate * _lastModified;
    NSString * _lastModifiedByDeviceID;
    struct { 
        long long majorVersion; 
        long long minorVersion; 
        long long patchVersion; 
    }  _lastModifiedByVersion;
    DNDMode * _mode;
    NSArray * _triggers;
}

@property (nonatomic, readonly) unsigned long long allowSmartEntry;
@property (getter=isAutomaticallyGenerated, nonatomic, readonly) bool automaticallyGenerated;
@property (nonatomic, readonly) long long compatibilityVersion;
@property (nonatomic, readonly, copy) DNDConfiguration *configuration;
@property (nonatomic, readonly, copy) NSDate *created;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long dimsLockScreen;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long impactsAvailability;
@property (nonatomic, readonly, copy) NSDate *lastModified;
@property (nonatomic, readonly, copy) NSString *lastModifiedByDeviceID;
@property (nonatomic, readonly) struct { long long x1; long long x2; long long x3; } lastModifiedByVersion;
@property (nonatomic, readonly, copy) DNDMode *mode;
@property (nonatomic, readonly) long long rawResolvedCompatibilityVersion;
@property (nonatomic, readonly) long long resolvedCompatibilityVersion;
@property (readonly) Class superclass;
@property (getter=isSupportedConfiguration, nonatomic, readonly) bool supportedConfiguration;
@property (nonatomic, readonly, copy) NSArray *triggers;

// Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb

+ (id)defaultModeConfiguration;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_containsSecureTriggers:(id)arg1;
- (id)_initWithModeConfiguration:(id)arg1;
- (long long)_maxTriggerCompatibilityVersion:(id)arg1;
- (unsigned long long)allowSmartEntry;
- (long long)compatibilityVersion;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)created;
- (id)description;
- (void)diffAgainstObject:(id)arg1 usingDiffBuilder:(id)arg2 withDescription:(id)arg3;
- (unsigned long long)dimsLockScreen;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasSecureData;
- (unsigned long long)hash;
- (unsigned long long)impactsAvailability;
- (id)initWithCoder:(id)arg1;
- (id)initWithMode:(id)arg1 configuration:(id)arg2 triggers:(id)arg3;
- (id)initWithMode:(id)arg1 configuration:(id)arg2 triggers:(id)arg3 impactsAvailability:(unsigned long long)arg4 dimsLockScreen:(unsigned long long)arg5 created:(id)arg6 lastModified:(id)arg7 automaticallyGenerated:(bool)arg8 compatibilityVersion:(long long)arg9 lastModifiedByVersion:(struct { long long x1; long long x2; long long x3; })arg10 lastModifiedByDeviceID:(id)arg11;
- (bool)isAutomaticallyGenerated;
- (bool)isEqual:(id)arg1;
- (bool)isSupportedConfiguration;
- (id)lastModified;
- (id)lastModifiedByDeviceID;
- (struct { long long x1; long long x2; long long x3; })lastModifiedByVersion;
- (void)log:(id)arg1 withMessage:(id)arg2;
- (id)mergeDecision:(id)arg1 reason:(id)arg2;
- (id)mergeWithRemoteModeConfiguration:(id)arg1;
- (id)mode;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)rawResolvedCompatibilityVersion;
- (long long)resolvedCompatibilityVersion;
- (id)shortDescription;
- (id)triggers;

// Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer

+ (id)modeConfigurationForRecord:(id)arg1;

- (id)makeRecord;

// Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit

- (bool)nc_modeConfigurationHasExclusiveAppConfigurationType;

@end
