
@interface _UIPlatterTransformView : UIView {
    bool  _allowsUserInteraction;
    bool  _appliesMinificationFilter;
    _UIMorphingPlatterBackgroundCaptureView * _backgroundCaptureView;
    _UIPortalView * _backgroundPortalView;
    bool  _forwardsHitTestingToSourceView;
    bool  _hidesSourceView;
    bool  _matchesAlpha;
    _UIPortalView * _portalView;
    bool  _shouldTakeOwnershipOfSourceView;
    UITargetedPreview * _sourcePreview;
}

@property (nonatomic) bool allowsUserInteraction;
@property (nonatomic) bool appliesMinificationFilter;
@property (nonatomic, retain) _UIMorphingPlatterBackgroundCaptureView *backgroundCaptureView;
@property (nonatomic, retain) _UIPortalView *backgroundPortalView;
@property (nonatomic) bool forwardsHitTestingToSourceView;
@property (nonatomic) bool hidesSourceView;
@property (nonatomic) bool matchesAlpha;
@property (nonatomic, retain) _UIPortalView *portalView;
@property (nonatomic) bool shouldTakeOwnershipOfSourceView;
@property (nonatomic, retain) UITargetedPreview *sourcePreview;
@property (nonatomic, readonly) UIView *sourceView;

- (void).cxx_destruct;
- (void)_updateMinificationFilter;
- (bool)allowsUserInteraction;
- (bool)appliesMinificationFilter;
- (id)backgroundCaptureView;
- (id)backgroundPortalView;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)didTearOffForDrag;
- (bool)forwardsHitTestingToSourceView;
- (bool)hidesSourceView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (bool)matchesAlpha;
- (id)portalView;
- (void)setAllowsUserInteraction:(bool)arg1;
- (void)setAppliesMinificationFilter:(bool)arg1;
- (void)setBackgroundCaptureView:(id)arg1;
- (void)setBackgroundPortalView:(id)arg1;
- (void)setForwardsHitTestingToSourceView:(bool)arg1;
- (void)setHidesSourceView:(bool)arg1;
- (void)setMatchesAlpha:(bool)arg1;
- (void)setPortalView:(id)arg1;
- (void)setShouldTakeOwnershipOfSourceView:(bool)arg1;
- (void)setSourcePreview:(id)arg1;
- (bool)shouldTakeOwnershipOfSourceView;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)sourcePreview;
- (id)sourceView;

@end
