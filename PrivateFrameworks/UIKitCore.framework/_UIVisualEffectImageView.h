
@interface _UIVisualEffectImageView : UIImageView <_UIVisualEffectViewParticipatingInternal> {
    NSArray * _filters;
    _UIVisualEffectViewBackdropCaptureGroup * _primaryCaptureGroup;
    NSArray * _viewEffects;
}

@property (nonatomic, retain) UIView<_UIVisualEffectViewParticipating> *containedView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableGroupFiltering;
@property (nonatomic, copy) NSArray *filters;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UIVisualEffectViewBackdropCaptureGroup *primaryCaptureGroup;
@property (nonatomic) <_UIVisualEffectViewSubviewMonitoring> *subviewMonitor;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *viewEffects;

- (void).cxx_destruct;
- (id)_initialValueForLayer:(id)arg1 keyPath:(id)arg2 usePresentationValue:(bool)arg3;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)applyIdentityFilterEffects;
- (void)applyIdentityViewEffects;
- (void)applyRequestedFilterEffects;
- (void)applyRequestedViewEffects;
- (id)containedView;
- (bool)disableGroupFiltering;
- (id)filters;
- (id)primaryCaptureGroup;
- (void)setContainedView:(id)arg1;
- (void)setDisableGroupFiltering:(bool)arg1;
- (void)setFilters:(id)arg1;
- (void)setPrimaryCaptureGroup:(id)arg1;
- (void)setSubviewMonitor:(id)arg1;
- (void)setViewEffects:(id)arg1;
- (id)subviewMonitor;
- (id)viewEffects;

@end
