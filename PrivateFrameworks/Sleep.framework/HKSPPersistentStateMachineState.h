
@interface HKSPPersistentStateMachineState : HKSPStateMachineState <HKSPDictionarySerializable, HKSPPersistentStateMachineEventHandler, NSCoding, NSCopying> {
    NSDateInterval * _lifetimeInterval;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) double expirationDuration;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDateInterval *lifetimeInterval;
@property (nonatomic, readonly) bool schedulesExpiration;
@property (nonatomic, readonly) HKSPPersistentStateMachine *stateMachine;
@property (readonly) Class superclass;

+ (bool)_hasExpirationDate:(id)arg1;
+ (bool)_isExpired:(id)arg1 currentDate:(id)arg2;
+ (id)infiniteInterval;

- (void).cxx_destruct;
- (void)_didEnter;
- (void)_didExit;
- (void)_expireOrRescheduleExpirationIfNecessary;
- (bool)_isExpired;
- (void)_resetLifetimeInterval;
- (bool)_updateExpirationDate;
- (void)_updateState;
- (id)_updatedLifetimeIntervalWithStartDate:(id)arg1;
- (bool)_willEnter;
- (void)_willExit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)equalsBuilderWithObject:(id)arg1;
- (id)expirationDate;
- (double)expirationDuration;
- (id)initWithCoder:(id)arg1;
- (id)initWithStateMachine:(id)arg1;
- (id)lifetimeInterval;
- (bool)schedulesExpiration;
- (void)setLifetimeInterval:(id)arg1;
- (void)stateDidExpire;
- (void)stateWithIdentifierDidExpire:(id)arg1;
- (id)succinctDescriptionBuilder;

@end
