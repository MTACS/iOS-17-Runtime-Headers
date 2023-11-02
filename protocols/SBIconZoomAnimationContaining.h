
@protocol SBIconZoomAnimationContaining <SBIconAnimationContaining>

@required

- (SBIconListView *)currentIconListView;
- (SBIconListView *)dockIconListView;
- (SBHIconModel *)iconModel;

@end
