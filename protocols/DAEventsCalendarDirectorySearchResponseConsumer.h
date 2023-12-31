
@protocol DAEventsCalendarDirectorySearchResponseConsumer <NSObject>

@required

- (void)calendarDirectorySearchFinishedWithError:(NSError *)arg1 exceededResultLimit:(bool)arg2;
- (void)calendarDirectorySearchReturnedResults:(NSDictionary *)arg1;

@end
