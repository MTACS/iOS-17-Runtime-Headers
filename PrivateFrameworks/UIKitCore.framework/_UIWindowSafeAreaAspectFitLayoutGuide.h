
@interface _UIWindowSafeAreaAspectFitLayoutGuide : UILayoutGuide <UILayoutGuideAspectFitting, _UIViewBoundingPathChangeObserver> {
    double  _aspectRatio;
    NSLayoutConstraint * _heightConstraint;
    bool  _layoutFrameDirty;
    NSLayoutConstraint * _leftConstraint;
    NSLayoutConstraint * _topConstraint;
    NSLayoutConstraint * _widthConstraint;
}

@property (nonatomic) double aspectRatio;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_boundingPathMayHaveChangedForView:(id)arg1 relativeToBoundsOriginOnly:(bool)arg2;
- (void)_createOrUpdateHeightConstraintWithConstant:(double)arg1 owningView:(id)arg2 constraintsToActivate:(id)arg3;
- (void)_createOrUpdateLeftConstraintWithConstant:(double)arg1 owningView:(id)arg2 constraintsToActivate:(id)arg3;
- (void)_createOrUpdateTopConstraintWithConstant:(double)arg1 owningView:(id)arg2 constraintsToActivate:(id)arg3;
- (void)_createOrUpdateWidthConstraintWithConstant:(double)arg1 owningView:(id)arg2 constraintsToActivate:(id)arg3;
- (bool)_isSafeAreaAspectFitLayoutGuide;
- (void)_setOwningView:(id)arg1;
- (void)_updateLayoutFrameConstraintsIfNeededWithOwningView:(id)arg1;
- (void)_updateLayoutFrameInOwningView:(id)arg1 fromEngine:(id)arg2;
- (double)aspectRatio;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setAspectRatio:(double)arg1;

@end
