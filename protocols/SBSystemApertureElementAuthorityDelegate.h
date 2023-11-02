
@protocol SBSystemApertureElementAuthorityDelegate <NSObject>

@required

- (bool)systemApertureApertureElementAuthority:(SBSystemApertureElementAuthority *)arg1 isActivityElementAlerting:(id <SAElement><SAActivityBehavior>)arg2;
- (bool)systemApertureApertureElementAuthority:(SBSystemApertureElementAuthority *)arg1 isElementExpandedDueToUserInteraction:(id <SAElement>)arg2;
- (bool)systemApertureApertureElementAuthority:(SBSystemApertureElementAuthority *)arg1 isElementRequiredToRemainVisible:(id <SAElement>)arg2;
- (bool)systemApertureApertureElementAuthority:(SBSystemApertureElementAuthority *)arg1 isElementUrgentlyVisible:(id <SAElement>)arg2;
- (long long)systemApertureApertureElementAuthority:(SBSystemApertureElementAuthority *)arg1 preferredLayoutModeForElement:(id <SAElement>)arg2;
- (unsigned long long)systemApertureApertureElementAuthorityMaximumNumberOfSimultaneouslyVisibleElements:(SBSystemApertureElementAuthority *)arg1;

@end
