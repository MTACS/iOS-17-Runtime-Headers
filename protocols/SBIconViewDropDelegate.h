
@protocol SBIconViewDropDelegate <NSObject>

@optional

- (void)iconView:(SBIconView *)arg1 dropSessionDidEnter:(id <UIDropSession>)arg2;
- (void)iconView:(SBIconView *)arg1 dropSessionDidExit:(id <UIDropSession>)arg2;

@end
