
@protocol SBIconListViewDraggingPolicyHandling <UIDropInteractionDelegate_Private>

@required

- (bool)allowsSpringLoadForSession:(id <UIDropSession>)arg1 onIconView:(SBIconView *)arg2;
- (unsigned long long)dragHitRegionForDropSession:(id <UIDropSession>)arg1 iconListView:(SBIconListView *)arg2 point:(struct CGPoint { double x1; double x2; })arg3 icon:(SBIcon *)arg4;
- (void)handleSpringLoadOnIconView:(SBIconView *)arg1;

@end
