
@interface HDAssertion : NSObject {
    NSUUID * _UUID;
    NSString * _assertionIdentifier;
    double  _budget;
    double  _budgetIntervalStartTime;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HDAssertionManager * _manager;
    NSString * _ownerIdentifier;
    double  _remainingBudget;
    long long  _state;
}

@property (nonatomic, readonly, copy) NSUUID *UUID;
@property (nonatomic, readonly, copy) NSString *assertionIdentifier;
@property (nonatomic) double budget;
@property (nonatomic, readonly, copy) NSString *ownerIdentifier;
@property (readonly) long long rawState;
@property (readonly) double remainingBudget;
@property (readonly) long long state;

- (void).cxx_destruct;
- (id)UUID;
- (bool)_consumeFromBudgetThroughTime:(double)arg1;
- (void)_invalidateAndRelease:(bool)arg1;
- (id)_lock_cloneWithOwnerIdentifier:(id)arg1;
- (long long)_lock_consumeBudgetThroughTime:(double)arg1 error:(id*)arg2;
- (id)_lock_description;
- (double)_lock_remainingBudget;
- (bool)_lock_setBudget:(double)arg1 error:(id*)arg2;
- (id)_lock_setBudgetIntervalStartTime:(double)arg1;
- (long long)_lock_state;
- (void)_setBudgetIntervalStartTime:(double)arg1;
- (long long)_takeWithManager:(id)arg1;
- (id)assertionIdentifier;
- (double)budget;
- (id)cloneWithOwnerIdentifier:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithAssertionIdentifier:(id)arg1 ownerIdentifier:(id)arg2;
- (void)invalidate;
- (id)ownerIdentifier;
- (long long)rawState;
- (double)remainingBudget;
- (void)setBudget:(double)arg1;
- (long long)state;

@end
