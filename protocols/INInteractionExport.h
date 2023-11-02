
@protocol INInteractionExport <NSObject, JSExport>

@required

- (NSDateInterval *)dateInterval;
- (id)init;
- (INIntent *)intent;
- (INIntentResponse *)intentResponse;
- (void)setDateInterval:(NSDateInterval *)arg1;
- (void)setIntent:(INIntent *)arg1;
- (void)setIntentResponse:(INIntentResponse *)arg1;

@end
