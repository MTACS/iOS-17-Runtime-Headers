
@interface _UIVisualEffectHost : NSObject <_UIVisualEffectViewSubviewMonitoring> {
    bool  _autosetSubviewLabelTintColor;
    _UIVisualEffectBackdropView * _captureView;
    UIView<_UIVisualEffectViewParticipating> * _contentView;
    bool  _contentViewRequired;
    _UIVisualEffectDescriptor * _currentEffectDescriptor;
    _UIVisualEffectViewBackdropCaptureGroup * _primaryCaptureGroup;
    _UIVisualEffectDescriptor * _transitionEffectDescriptor;
    NSMutableArray * _views;
}

@property (nonatomic) _UIVisualEffectBackdropView *captureView;
@property (nonatomic, readonly) UIView<_UIVisualEffectViewParticipating> *contentView;
@property (nonatomic) bool contentViewRequired;
@property (nonatomic, retain) _UIVisualEffectDescriptor *currentEffectDescriptor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UIVisualEffectViewBackdropCaptureGroup *primaryCaptureGroup;
@property (readonly) Class superclass;
@property (nonatomic, readonly) _UIVisualEffectDescriptor *transitionEffectDescriptor;
@property (nonatomic, readonly) NSArray *views;

- (void).cxx_destruct;
- (void)_applyEffectDescriptor:(id)arg1;
- (void)_applyIdentityDescriptorEffectInvertingView:(id)arg1;
- (void)_applyRequestedDescriptorEffectInvertingView:(id)arg1;
- (id)_cloneFilters:(id)arg1;
- (void)_configureEffectDescriptor:(id)arg1;
- (void)_evaluateInPlaceFiltering;
- (void)_iterateViews:(id /* block */)arg1;
- (void)_updateAdjustTintColors;
- (void)_updateView:(id)arg1 shouldDrawWithTintColor:(bool)arg2;
- (void)_view:(id)arg1 willGainDescendent:(id)arg2;
- (void)_view:(id)arg1 willLoseDescendent:(id)arg2;
- (void)_view:(id)arg1 willMoveToWindow:(id)arg2;
- (id)_viewForEntry:(id)arg1 fromCapturePool:(id)arg2 imagePool:(id)arg3 otherPool:(id)arg4;
- (void)beginTransition;
- (id)captureView;
- (id)contentView;
- (bool)contentViewRequired;
- (id)currentEffectDescriptor;
- (id)description;
- (void)endTransition;
- (id)initWithContentView:(id)arg1;
- (void)monitorSubviewsOf:(id)arg1;
- (void)prepareToTransitionToEffectDescriptor:(id)arg1;
- (id)primaryCaptureGroup;
- (void)setCaptureView:(id)arg1;
- (void)setContentViewRequired:(bool)arg1;
- (void)setCurrentEffectDescriptor:(id)arg1;
- (void)setPrimaryCaptureGroup:(id)arg1;
- (id)transitionEffectDescriptor;
- (id)views;
- (void)willGainDescendent:(id)arg1;
- (void)willLoseDescendent:(id)arg1;

@end
