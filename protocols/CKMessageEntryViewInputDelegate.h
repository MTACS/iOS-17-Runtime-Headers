
@protocol CKMessageEntryViewInputDelegate <NSObject>

@required

- (bool)messageEntryShouldHideCaret:(CKMessageEntryView *)arg1;
- (void)messageEntryViewBrowserButtonHit:(CKMessageEntryView *)arg1;
- (void)messageEntryViewHandwritingButtonHit:(CKMessageEntryView *)arg1;
- (long long)messageEntryViewHighLightInputButton:(CKMessageEntryView *)arg1;
- (void)messageEntryViewInputDidTakeFocus:(CKMessageEntryView *)arg1;
- (void)messageEntryViewPhotoButtonHit:(CKMessageEntryView *)arg1;
- (bool)messageEntryViewShouldVerticallyInsetForPresentedAppCard:(CKMessageEntryView *)arg1;

@optional

- (void)messageEntryView:(CKMessageEntryView *)arg1 didLongPressPlusButton:(UIView *)arg2;
- (void)messageEntryView:(CKMessageEntryView *)arg1 didSelectPluginAtIndex:(NSIndexPath *)arg2;
- (void)messageEntryView:(CKMessageEntryView *)arg1 didSelectPlusButton:(UIView *)arg2;
- (void)messageEntryView:(CKMessageEntryView *)arg1 touchCancelForPlusButton:(UIView *)arg2;
- (void)messageEntryView:(CKMessageEntryView *)arg1 touchDownInsidePlusButton:(UIView *)arg2;
- (void)messageEntryView:(CKMessageEntryView *)arg1 touchDragEnterForPlusButton:(UIView *)arg2;
- (void)messageEntryView:(CKMessageEntryView *)arg1 touchDragExitForPlusButton:(UIView *)arg2;
- (void)messageEntryView:(CKMessageEntryView *)arg1 touchUpOutsidePlusButton:(UIView *)arg2;
- (void)messageEntryViewDidCollapse:(CKMessageEntryView *)arg1;
- (void)messageEntryViewDidExpand:(CKMessageEntryView *)arg1;
- (void)messageEntryViewPhotoButtonTouchCancel:(CKMessageEntryView *)arg1;
- (void)messageEntryViewPhotoButtonTouchDown:(CKMessageEntryView *)arg1;
- (void)messageEntryViewPhotoButtonTouchUpOutside:(CKMessageEntryView *)arg1;
- (void)messageEntryViewSelectedAppMenuItem:(id <CKAppMenuItem>)arg1;
- (bool)messageEntryViewShouldResignFirstResponder:(CKMessageEntryView *)arg1;

@end
