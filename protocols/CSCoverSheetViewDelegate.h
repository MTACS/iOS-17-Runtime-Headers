
@protocol CSCoverSheetViewDelegate <CSCoverSheetViewTransitioning>

@required

- (bool)interpretsTouchLocationAsContentInListRestrictedRect:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRestrictsTouchesForRemoteView:(bool)arg1;
- (bool)shouldModifyPageScrolling;

@end
