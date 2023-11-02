
@interface SAAutomaticallyInvalidatingAssertion : SAAssertion <SAAutomaticallyInvalidatable> {
    bool  _automaticallyInvalidatable;
    double  _invalidationInterval;
    NSTimer * _invalidationTimer;
    NSString * _key;
    NSString * _lockReason;
}

@property (getter=isAutomaticallyInvalidatable, nonatomic) bool automaticallyInvalidatable;
@property (nonatomic, readonly, copy) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double invalidationInterval;
@property (readonly) Class superclass;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (id)_descriptionConstituents;
- (void)_invalidateInvalidationTimerIfNecessary;
- (void)_scheduleInvalidationTimerIfNecessary;
- (bool)_setAutomaticallyInvalidatable:(bool)arg1 lockingWithKey:(id)arg2 reason:(id)arg3;
- (id)initWithInvalidationInterval:(double)arg1;
- (double)invalidationInterval;
- (bool)isAutomaticallyInvalidatable;
- (void)resetAutomaticInvalidationTimer;
- (void)setAutomaticallyInvalidatable:(bool)arg1;
- (bool)setAutomaticallyInvalidatable:(bool)arg1 lockingWithKey:(id)arg2 reason:(id)arg3;

@end
