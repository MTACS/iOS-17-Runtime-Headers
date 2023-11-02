
@protocol _UISearchBarContainerSublayoutDelegate <NSObject>

@required

- (void)containerLayoutWillUpdateLayout:(_UISearchBarLayoutBase *)arg1;
- (bool)isHostingNavBarTransitionActive;
- (bool)isProspective;
- (double)layout:(_UISearchBarLayoutBase *)arg1 fontScaledValueForValue:(double)arg2;
- (void)setHostingNavBarTransitionActive:(bool)arg1;

@end
