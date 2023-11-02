
@protocol DAEventsCalendarAvailabilityResponseConsumer <NSObject>

@required

- (void)calendarAvailabilityRequestFinishedWithError:(NSError *)arg1;
- (void)calendarAvailabilityRequestReturnedResults:(NSDictionary *)arg1;

@end
