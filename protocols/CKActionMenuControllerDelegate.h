
@protocol CKActionMenuControllerDelegate <NSObject>

@optional

- (void)actionMenuControllerDidDismissActionMenu:(CKActionMenuController *)arg1;
- (void)actionMenuControllerDidPresentActionMenu:(CKActionMenuController *)arg1;
- (void)actionMenuControllerWillDismissActionMenu:(CKActionMenuController *)arg1 animated:(bool)arg2;
- (void)actionMenuControllerWillPresentActionMenu:(CKActionMenuController *)arg1 animated:(bool)arg2;

@end
