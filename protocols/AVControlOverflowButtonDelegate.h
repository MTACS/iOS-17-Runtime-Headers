
@protocol AVControlOverflowButtonDelegate <NSObject>

@required

- (NSArray *)overflowMenuItemsForControlOverflowButton:(AVControlOverflowButton *)arg1;

@optional

- (void)overflowButtonDidHideContextMenu:(AVControlOverflowButton *)arg1;
- (void)overflowButtonWillShowContextMenu:(AVControlOverflowButton *)arg1;

@end
