
@protocol SBHIconLaunchContext <NSObject>

@optional

- (NSSet *)actions;
- (SBIconView *)iconView;
- (void)setActions:(NSSet *)arg1;
- (void)setIconView:(SBIconView *)arg1;

@end
