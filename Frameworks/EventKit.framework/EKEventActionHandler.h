
@interface EKEventActionHandler : NSObject

+ (id)_displayStringForDate:(id)arg1;
+ (id)_logHandle;
+ (id)sharedInstance;

- (id)_intentForAction:(id)arg1 onEvent:(id)arg2;
- (id)createEventIntentForEvent:(id)arg1;
- (id)createEventIntentForEvent:(id)arg1 withSuggestionsInfoUniqueKey:(id)arg2;
- (void)donateInteractionForAction:(id)arg1 onEvent:(id)arg2;
- (void)donatePredictiveAction:(id)arg1 forEvent:(id)arg2;
- (void)handleEventCreation:(id)arg1;
- (void)handleEventDeletion:(id)arg1;
- (void)handleEventUpdate:(id)arg1;
- (void)prepareForEventUpdate:(id)arg1;
- (void)removeInteractionsForCalendar:(id)arg1;

@end
