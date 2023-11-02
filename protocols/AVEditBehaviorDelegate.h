
@protocol AVEditBehaviorDelegate <NSObject>

@required

- (NSArray *)editBehaviorAlertActionsForDoneButtonTap:(AVEditBehavior *)arg1;
- (void)editBehaviorDidCancel:(AVEditBehavior *)arg1;

@end
