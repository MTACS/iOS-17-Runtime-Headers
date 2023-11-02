
@interface SAReminderCompositeTrigger : SAReminderTrigger

@property (nonatomic, retain) SAReminderDateTimeTrigger *dateTimeTrigger;
@property (nonatomic, retain) SAReminderLocationTrigger *locationTrigger;

+ (id)compositeTrigger;
+ (id)compositeTriggerWithDictionary:(id)arg1 context:(id)arg2;

- (id)dateTimeTrigger;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)locationTrigger;
- (void)setDateTimeTrigger:(id)arg1;
- (void)setLocationTrigger:(id)arg1;

@end
