
@interface EKEventNotesDetailItem : EKEventTextDetailItem

+ (id)moreButtonLabel;
+ (id /* block */)textFromEventBlock;
+ (id)titleForCell;
+ (id)titleForExtendedViewController;

- (bool)configureWithCalendar:(id)arg1 preview:(bool)arg2;
- (id)textForCopyAction;
- (id)textForExtendedViewController;

@end
