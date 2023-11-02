
@interface SAUISystemApertureManager : NSObject <SAAlertingConfiguring, SAElementHosting, SAElementRegistering, SAUIElementViewControllingObserving, SAUILayoutHostingPrivate, SAUILayoutSpecifyingOverridingParticipant> {
    <SAUISystemApertureManagerDelegate> * _delegate;
    <SAElementConsidering> * _elementAuthority;
    NSPointerArray * _elements;
    NSMapTable * _elementsToAssertions;
    NSMapTable * _elementsToElementViewControllers;
    NSMapTable * _elementsToInvalidatedAssertions;
    UIViewController<SAUIElementViewControlling> * _indicatorElementViewController;
    NSPointerArray * _mostPromotedElements;
    NSArray * _orderedElementViewControllers;
    bool  _promotedStateIsValid;
    NSMutableSet * _removedElementViewControllers;
    NSArray * _temporallyOrderedElements;
}

@property (nonatomic, readonly) long long behaviorOverridingRole;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SAUISystemApertureManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIViewController<SAUIElementViewControlling> *indicatorElementViewController;
@property (nonatomic, readonly, copy) NSArray *orderedElementViewControllers;
@property (nonatomic, readonly, copy) NSArray *registeredElements;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_addInvalidatedAssertion:(id)arg1 forElement:(id)arg2;
- (id)_assertionForElement:(id)arg1;
- (id)_assertionForElementCreatingIfNecessary:(id)arg1;
- (bool)_axLayoutSpecifierRequestsCollapseIfExpandedByUserInteraction:(id)arg1;
- (void)_axLayoutSpecifierRequestsDiminishment:(id)arg1;
- (void)_compactElements;
- (void)_elementAssertionDidInvalidate:(id)arg1;
- (bool)_elementRequiresBeingDisplayedAlone:(id)arg1;
- (id)_elementViewControllerForElement:(id)arg1 creatingIfNecessary:(bool)arg2;
- (void)_invalidatePromotedState;
- (void)_invalidateTemporallyOrderedElements;
- (id)_invalidatedAssertionForElement:(id)arg1;
- (unsigned long long)_maximumNumberOfSimultaneouslyVisibleElements;
- (void)_purgeRemovedElementViewControllers;
- (void)_reevaluatePromotedElements;
- (void)_removeAssertionForElement:(id)arg1;
- (void)_removeElementViewController:(id)arg1;
- (void)_removeInvalidatedAssertionForElement:(id)arg1;
- (void)_requestHostNeedsLayout;
- (id)_temporallyOrderedVisibleAlertAndActivityElements;
- (double)alertingDurationForHost:(id)arg1;
- (long long)behaviorOverridingRole;
- (double)concentricPaddingForProvidedView:(id)arg1 fromViewProvider:(id)arg2;
- (id)delegate;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })edgeOutsetsForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)elementAssertionForElement:(id)arg1;
- (void)elementRequestsNegativeResponse:(id)arg1;
- (void)elementRequestsSignificantUpdateTransition:(id)arg1;
- (id)elementViewControllerForElement:(id)arg1;
- (void)elementViewControllingDidDisappear:(id)arg1;
- (void)hostWillPerformLayout;
- (id)indicatorElementViewController;
- (id)initWithElementAuthority:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })interSensorRegionInContentView:(id)arg1;
- (void)invalidatePromotedElements;
- (struct CGSize { double x1; double x2; })maximumAvailableSizeForProvidedLeadingView:(id)arg1 fromViewProvider:(id)arg2;
- (struct CGSize { double x1; double x2; })maximumAvailableSizeForProvidedMinimalView:(id)arg1 fromViewProvider:(id)arg2;
- (struct CGSize { double x1; double x2; })maximumAvailableSizeForProvidedTrailingView:(id)arg1 fromViewProvider:(id)arg2;
- (void)menuPresentationRequestDidChangeForLayoutSpecifier:(id)arg1;
- (id)orderedElementViewControllers;
- (void)preferredEdgeOutsetsDidInvalidateForLayoutSpecifier:(id)arg1;
- (void)preferredLayoutModeDidInvalidateForLayoutSpecifier:(id)arg1;
- (void)preferredPromotionDidInvalidateForLayoutSpecifier:(id)arg1;
- (id)registerElement:(id)arg1;
- (id)registeredElements;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sensorRegionInContentView:(id)arg1 fromViewProvider:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sensorRegionObstructingViewProvider:(id)arg1 inContentView:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setLayoutMode:(long long)arg1 reason:(long long)arg2 forTargetWithOverrider:(id)arg3;
- (double)viewProviderSensorShadowOpacityFactor:(id)arg1;
- (bool)viewProviderShouldMakeSensorShadowVisible:(id)arg1;

@end
