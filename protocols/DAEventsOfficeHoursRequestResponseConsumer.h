
@protocol DAEventsOfficeHoursRequestResponseConsumer <NSObject>

@required

- (void)officeHoursRequestWithID:(NSString *)arg1 finishedWithError:(NSError *)arg2;
- (void)officeHoursRequestWithID:(NSString *)arg1 finishedWithOfficeHours:(NSArray *)arg2 error:(NSError *)arg3;

@end
