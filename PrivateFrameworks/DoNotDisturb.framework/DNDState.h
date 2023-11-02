
@interface DNDState : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _activeModeAssertionMetadata;
    DNDModeConfiguration * _activeModeConfiguration;
    NSString * _overrideModeIdentifier;
    NSDate * _startDate;
    unsigned long long  _suppressionState;
    NSDate * _userVisibleTransitionDate;
    unsigned long long  _userVisibleTransitionLifetimeType;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic, readonly, copy) NSArray *activeModeAssertionMetadata;
@property (nonatomic, readonly, copy) DNDModeConfiguration *activeModeConfiguration;
@property (nonatomic, readonly, copy) NSString *activeModeIdentifier;
@property (nonatomic, readonly, copy) NSArray *activeModeIdentifiers;
@property (nonatomic, readonly, copy) NSUUID *activeModeUUID;
@property (nonatomic, readonly, copy) NSDate *startDate;
@property (nonatomic, readonly) unsigned long long suppressionState;
@property (nonatomic, readonly, copy) NSDate *userVisibleTransitionDate;
@property (nonatomic, readonly) unsigned long long userVisibleTransitionLifetimeType;
@property (nonatomic, readonly) bool willSuppressInterruptions;

// Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeModeAssertionMetadata;
- (id)activeModeConfiguration;
- (id)activeModeIdentifier;
- (id)activeModeIdentifiers;
- (id)activeModeUUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuppressionState:(unsigned long long)arg1 activeModeAssertionMetadata:(id)arg2 startDate:(id)arg3 userVisibleTransitionDate:(id)arg4 userVisibleTransitionLifetimeType:(unsigned long long)arg5 activeModeConfiguration:(id)arg6;
- (bool)isActive;
- (bool)isEqual:(id)arg1;
- (void)setOverrideModeIdentifier:(id)arg1;
- (id)startDate;
- (unsigned long long)suppressionState;
- (id)userVisibleTransitionDate;
- (unsigned long long)userVisibleTransitionLifetimeType;
- (bool)willSuppressInterruptions;

// Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet

- (bool)_isDNDSettingEnabled:(unsigned long long)arg1;
- (bool)sb_isBedtimeModeActive;
- (bool)sb_isDimmingModeActive;
- (bool)sb_isDrivingModeActive;

// Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer

+ (id)fallbackState;

@end
