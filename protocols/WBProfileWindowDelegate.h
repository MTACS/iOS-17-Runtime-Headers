
@protocol WBProfileWindowDelegate <NSObject>

@required

- (void)closeProfileWindow:(WBProfileWindow *)arg1;
- (void)profileWindow:(WBProfileWindow *)arg1 selectProfile:(WBProfile *)arg2;
- (void)profileWindow:(WBProfileWindow *)arg1 selectTabGroup:(WBTabGroup *)arg2;

@end
