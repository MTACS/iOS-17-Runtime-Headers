
@protocol EKRecurrenceChooserControllerDelegate <NSObject>

@required

- (void)recurrenceChooser:(EKRecurrenceChooserController *)arg1 wantsRowReload:(long long)arg2;
- (void)recurrenceChooserUpdated:(EKRecurrenceChooserController *)arg1;
- (void)recurrenceChooserWantsReload:(EKRecurrenceChooserController *)arg1;

@end
