
@protocol REMReminderCreationDelegate <NSObject>

@required

- (NSDateComponents *)dueDateComponents;
- (CLLocation *)location;
- (NSString *)locationString;
- (NSAttributedString *)notes;
- (void)reminderCreationViewController:(REMReminderCreationViewController *)arg1 didCreateReminder:(bool)arg2 error:(NSError *)arg3;
- (NSAttributedString *)title;
- (NSURL *)url;
- (NSUserActivity *)userActivity;

@optional

- (long long)locationProximity;
- (bool)titleIsGeneratedSuggestion;
- (bool)wantsExtendedDetailOnlyView;

@end
