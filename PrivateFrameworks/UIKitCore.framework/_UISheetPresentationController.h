
@interface _UISheetPresentationController : UISheetPresentationController {
    NSArray * __passthroughViews;
    double  __preferredRecessedCornerRadius;
}

@property (setter=_setAdditionalMinimumTopInset:, nonatomic) double _additionalMinimumTopInset;
@property (setter=_setAllowsInteractiveDismissWhenFullScreen:, nonatomic) bool _allowsInteractiveDismissWhenFullScreen;
@property (setter=_setAllowsTearOff:, nonatomic) bool _allowsTearOff;
@property (setter=_setCornerRadiusForPresentationAndDismissal:, nonatomic) double _cornerRadiusForPresentationAndDismissal;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _currentPresentedViewFrame;
@property (setter=_setDetentDirectionWhenFloating:, nonatomic) long long _detentDirectionWhenFloating;
@property (nonatomic, readonly) NSArray *_detentValues;
@property (setter=_setDetents:, nonatomic, copy) NSArray *_detents;
@property (setter=_setGrabberTopSpacing:, nonatomic) double _grabberTopSpacing;
@property (getter=_isHidden, setter=_setHidden:, nonatomic) bool _hidden;
@property (setter=_setHiddenAncestorSheetID:, nonatomic, copy) NSString *_hiddenAncestorSheetID;
@property (setter=_setHorizontalAlignment:, nonatomic) long long _horizontalAlignment;
@property (setter=_setIndexOfCurrentDetent:, nonatomic) long long _indexOfCurrentDetent;
@property (setter=_setIndexOfLastUndimmedDetent:, nonatomic) long long _indexOfLastUndimmedDetent;
@property (setter=_setIndexOfLastUndimmedDetentWhenEdgeAttachedInCompactHeight:, nonatomic) long long _indexOfLastUndimmedDetentWhenEdgeAttachedInCompactHeight;
@property (setter=_setIndexOfLastUndimmedDetentWhenFloating:, nonatomic) long long _indexOfLastUndimmedDetentWhenFloating;
@property (setter=_setMarginInCompactHeight:, nonatomic) double _marginInCompactHeight;
@property (setter=_setMarginInRegularWidthRegularHeight:, nonatomic) double _marginInRegularWidthRegularHeight;
@property (setter=_setPassthroughViews:, nonatomic, copy) NSArray *_passthroughViews;
@property (setter=_setPeeksWhenFloating:, nonatomic) bool _peeksWhenFloating;
@property (setter=_setPreferredCornerRadius:, nonatomic) double _preferredCornerRadius;
@property (setter=_setPreferredRecessedCornerRadius:, nonatomic) double _preferredRecessedCornerRadius;
@property (setter=_setPrefersScrollingExpandsToLargerDetentWhenScrolledToEdge:, nonatomic) bool _prefersScrollingExpandsToLargerDetentWhenScrolledToEdge;
@property (setter=_setPrefersScrollingResizesWhenDetentDirectionIsDown:, nonatomic) bool _prefersScrollingResizesWhenDetentDirectionIsDown;
@property (setter=_setSheetID:, nonatomic, copy) NSString *_sheetID;
@property (setter=_setShouldScaleDownBehindDescendantSheets:, nonatomic) bool _shouldScaleDownBehindDescendantSheets;
@property (setter=_setSourceView:, nonatomic, retain) UIView *_sourceView;
@property (setter=_setTucksIntoUnsafeAreaInCompactHeight:, nonatomic) bool _tucksIntoUnsafeAreaInCompactHeight;
@property (setter=_setWantsBottomAttached:, nonatomic) bool _wantsBottomAttached;
@property (setter=_setWantsBottomAttachedInCompactHeight:, nonatomic) bool _wantsBottomAttachedInCompactHeight;
@property (setter=_setWantsFloatingInRegularWidthCompactHeight:, nonatomic) bool _wantsFloatingInRegularWidthCompactHeight;
@property (setter=_setWantsFullScreen:, nonatomic) bool _wantsFullScreen;
@property (setter=_setWantsGrabber:, nonatomic) bool _wantsGrabber;
@property (setter=_setWidthFollowsPreferredContentSizeWhenBottomAttached:, nonatomic) bool _widthFollowsPreferredContentSizeWhenBottomAttached;
@property (nonatomic) <_UISheetPresentationControllerDelegate> *delegate;
@property (getter=_shouldDismissWhenTappedOutside, setter=_setShouldDismissWhenTappedOutside:, nonatomic) bool shouldDismissWhenTappedOutside;

- (void).cxx_destruct;
- (void)_animateChanges:(id /* block */)arg1;
- (id)_detents;
- (void)_invalidateDetents;
- (id)_passthroughViews;
- (double)_preferredCornerRadius;
- (double)_preferredRecessedCornerRadius;
- (bool)_prefersScrollingExpandsToLargerDetentWhenScrolledToEdge;
- (void)_sendDidChangeSelectedDetentIdentifier;
- (void)_setDetents:(id)arg1;
- (void)_setPassthroughViews:(id)arg1;
- (void)_setPreferredCornerRadius:(double)arg1;
- (void)_setPreferredRecessedCornerRadius:(double)arg1;
- (void)_setPrefersScrollingExpandsToLargerDetentWhenScrolledToEdge:(bool)arg1;
- (void)_setSourceView:(id)arg1;
- (void)_setWantsBottomAttachedInCompactHeight:(bool)arg1;
- (void)_setWantsGrabber:(bool)arg1;
- (void)_setWidthFollowsPreferredContentSizeWhenBottomAttached:(bool)arg1;
- (id)_sourceView;
- (bool)_wantsBottomAttachedInCompactHeight;
- (bool)_wantsGrabber;
- (bool)_widthFollowsPreferredContentSizeWhenBottomAttached;

@end
