
@interface AutomateHomeIntent : INIntent

@property (nonatomic, retain) Automatable *automatableTask;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) TriggerCondition *trigger;

- (id)description;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;

@end
