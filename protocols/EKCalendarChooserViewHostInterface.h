
@protocol EKCalendarChooserViewHostInterface

@required

- (void)calendarSelectionChanged:(NSSet *)arg1 constraintsDictionary:(NSDictionary *)arg2 allSelected:(bool)arg3;
- (void)requestPresentViewWithName:(NSString *)arg1 viewID:(NSString *)arg2 presentationStyle:(long long)arg3;

@end
