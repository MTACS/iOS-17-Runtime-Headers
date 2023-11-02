
@protocol SAUISystemApertureManagerDelegate <SAUILayoutHosting>

@required

- (void)systemApertureManagerIndicatorHostingDidChange:(bool)arg1;
- (unsigned long long)systemApertureManagerMaximumNumberOfSimultaneouslyVisibleElements:(SAUISystemApertureManager *)arg1;
- (void)systemApertureManagerRequestsHostNeedsLayout:(SAUISystemApertureManager *)arg1;

@end
