
@interface SBIdleTimerRequestConfiguration : ITIdleTimerConfiguration {
    NSNumber * _boxed_maxExpirationTimeout;
    NSNumber * _boxed_minExpirationTimeout;
    unsigned long long  _precedence;
}

@property (getter=_boxed_maxExpirationTimeout, setter=_setBoxed_maxExpirationTimeout:, nonatomic, retain) NSNumber *boxed_maxExpirationTimeout;
@property (getter=_boxed_minExpirationTimeout, setter=_setBoxed_minExpirationTimeout:, nonatomic, retain) NSNumber *boxed_minExpirationTimeout;
@property (nonatomic, readonly) bool hasMaxExpirationTimeout;
@property (nonatomic, readonly) bool hasMinExpirationTimeout;
@property (nonatomic, readonly) unsigned long long idleEventMask;
@property (nonatomic) double maxExpirationTimeout;
@property (nonatomic) double minExpirationTimeout;
@property (nonatomic) unsigned long long precedence;

+ (id)configurationWithIdleEventHandler:(id)arg1;
+ (id)configurationWithMaximumExpirationTimeout:(double)arg1;
+ (id)configurationWithMinimumExpirationTimeout:(double)arg1;
+ (id)configurationWithMinimumExpirationTimeout:(double)arg1 maximumExpirationTimeout:(double)arg2;

- (void).cxx_destruct;
- (id)_boxed_maxExpirationTimeout;
- (id)_boxed_minExpirationTimeout;
- (void)_setBoxed_maxExpirationTimeout:(id)arg1;
- (void)_setBoxed_minExpirationTimeout:(id)arg1;
- (void)_setIdleEventHandler:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (bool)hasMaxExpirationTimeout;
- (bool)hasMinExpirationTimeout;
- (unsigned long long)idleEventMask;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (double)maxExpirationTimeout;
- (double)minExpirationTimeout;
- (unsigned long long)precedence;
- (void)setMaxExpirationTimeout:(double)arg1;
- (void)setMinExpirationTimeout:(double)arg1;
- (void)setPrecedence:(unsigned long long)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
