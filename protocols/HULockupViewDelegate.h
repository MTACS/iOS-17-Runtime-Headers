
@protocol HULockupViewDelegate <NSObject>

@optional

- (void)lockupView:(HULockupView *)arg1 downloadControlTapped:(HUDownloadControl *)arg2;
- (void)lockupView:(HULockupView *)arg1 expandableTextViewDidCollapse:(HUExpandableTextView *)arg2;
- (void)lockupView:(HULockupView *)arg1 expandableTextViewDidExpand:(HUExpandableTextView *)arg2;

@end
