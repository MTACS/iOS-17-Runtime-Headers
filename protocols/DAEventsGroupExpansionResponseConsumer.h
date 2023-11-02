
@protocol DAEventsGroupExpansionResponseConsumer <NSObject>

@required

- (void)groupExpansionFinishedWithResults:(NSDictionary *)arg1 error:(NSError *)arg2;

@end
