
@protocol PUMenuActionControllerDelegate <NSObject>

@optional

- (void)menuActionController:(PUMenuActionController *)arg1 didDismissWithActionIdentifier:(NSString *)arg2;
- (bool)menuActionControllerPreventRevealInMomentAction:(PUMenuActionController *)arg1;

@end
