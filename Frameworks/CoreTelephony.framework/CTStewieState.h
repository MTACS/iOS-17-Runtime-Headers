
@interface CTStewieState : NSObject <NSCopying, NSSecureCoding> {
    long long  _activeServices;
    long long  _allowedServices;
    long long  _baseReason;
    long long  _configuredForLocationServices;
    long long  _congestedServices;
    long long  _offGridCriteriaSatisfiedServices;
    long long  _reason;
    long long  _status;
    long long  _subscribedServices;
    long long  _subscriptionDeterminedServices;
    long long  _transportType;
}

@property (nonatomic) long long activeServices;
@property (nonatomic) long long allowedServices;
@property (nonatomic) long long baseReason;
@property (nonatomic) long long configuredForLocationServices;
@property (nonatomic) long long congestedServices;
@property (nonatomic) long long offGridCriteriaSatisfiedServices;
@property (nonatomic) long long reason;
@property (nonatomic) long long status;
@property (nonatomic) long long subscribedServices;
@property (nonatomic) long long subscriptionDeterminedServices;
@property (nonatomic) long long transportType;

+ (bool)supportsSecureCoding;

- (long long)activeServices;
- (long long)allowedServices;
- (long long)baseReason;
- (long long)configuredForLocationServices;
- (long long)congestedServices;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)displayInactiveSOSInStatusBar;
- (bool)displayStewieInStatusBar;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStewieState:(const struct StewieState { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned char x8; unsigned char x9; unsigned char x10; }*)arg1;
- (bool)isActiveService:(long long)arg1;
- (bool)isAllowedService:(long long)arg1;
- (bool)isConfiguredForLocation:(long long)arg1;
- (bool)isCongestedService:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToState:(id)arg1;
- (bool)isOffGridCriteriaSatisfied:(long long)arg1;
- (bool)isStewieActive;
- (bool)isStewieActiveOverBB;
- (bool)isStewieActiveOverInternet;
- (bool)isSubscribedService:(long long)arg1;
- (bool)isSubscriptionRequired:(long long)arg1;
- (bool)isSubscriptionStatusNetworkDetermined:(long long)arg1;
- (long long)offGridCriteriaSatisfiedServices;
- (long long)reason;
- (void)setActiveServices:(long long)arg1;
- (void)setAllowedServices:(long long)arg1;
- (void)setBaseReason:(long long)arg1;
- (void)setConfiguredForLocationServices:(long long)arg1;
- (void)setCongestedServices:(long long)arg1;
- (void)setOffGridCriteriaSatisfiedServices:(long long)arg1;
- (void)setReason:(long long)arg1;
- (void)setStatus:(long long)arg1;
- (void)setSubscribedServices:(long long)arg1;
- (void)setSubscriptionDeterminedServices:(long long)arg1;
- (void)setTransportType:(long long)arg1;
- (long long)status;
- (long long)statusReasonForService:(long long)arg1;
- (long long)subscribedServices;
- (long long)subscriptionDeterminedServices;
- (long long)transportType;

@end
