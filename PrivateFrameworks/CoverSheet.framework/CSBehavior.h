
@interface CSBehavior : NSObject <BSDescriptionProviding, CSBehaviorProviding, NSCopying, SBFIdleTimerBehaviorProviding> {
    long long  _idleTimerDuration;
    long long  _idleTimerMode;
    long long  _idleWarnMode;
    long long  _notificationBehavior;
    long long  _proximityDetectionMode;
    unsigned long long  _restrictedCapabilities;
    long long  _scrollingStrategy;
}

@property (nonatomic, readonly) double customIdleExpirationTimeout;
@property (nonatomic, readonly) double customIdleWarningTimeout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long idleTimerDuration;
@property (nonatomic) long long idleTimerMode;
@property (nonatomic) long long idleWarnMode;
@property (nonatomic) long long notificationBehavior;
@property (nonatomic) long long proximityDetectionMode;
@property (nonatomic) unsigned long long restrictedCapabilities;
@property (nonatomic) long long scrollingStrategy;
@property (readonly) Class superclass;

+ (id)behavior;
+ (id)behaviorForProvider:(id)arg1;

- (void)addRestrictedCapabilities:(unsigned long long)arg1;
- (bool)areRestrictedCapabilities:(unsigned long long)arg1;
- (void)conformsToCSBehaviorProviding;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (long long)idleTimerDuration;
- (long long)idleTimerMode;
- (long long)idleWarnMode;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToBehavior:(id)arg1;
- (long long)notificationBehavior;
- (long long)proximityDetectionMode;
- (void)removeRestrictedCapabilities:(unsigned long long)arg1;
- (void)reset;
- (unsigned long long)restrictedCapabilities;
- (long long)scrollingStrategy;
- (void)setIdleTimerDuration:(long long)arg1;
- (void)setIdleTimerMode:(long long)arg1;
- (void)setIdleWarnMode:(long long)arg1;
- (void)setNotificationBehavior:(long long)arg1;
- (void)setProximityDetectionMode:(long long)arg1;
- (void)setRestrictedCapabilities:(unsigned long long)arg1;
- (void)setScrollingStrategy:(long long)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)unionBehavior:(id)arg1;

@end
