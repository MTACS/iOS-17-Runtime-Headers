
@interface _UIVisualEffectBackingFakeView : UIView <_UIVisualEffectViewParticipating> {
    UIView * _clientView;
    UIView<_UIVisualEffectViewParticipating> * _containedView;
    NSArray * _filters;
    _UIVisualEffectViewBackdropCaptureGroup * _primaryCaptureGroup;
    NSArray * _viewEffects;
}

@property (nonatomic) UIView *clientView;
@property (nonatomic, retain) UIView<_UIVisualEffectViewParticipating> *containedView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *filters;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UIVisualEffectViewBackdropCaptureGroup *primaryCaptureGroup;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *viewEffects;

- (void).cxx_destruct;
- (void)_receiveVisitor:(id)arg1;
- (void)applyIdentityFilterEffects;
- (void)applyIdentityViewEffects;
- (void)applyRequestedFilterEffects;
- (void)applyRequestedViewEffects;
- (id)clientView;
- (id)containedView;
- (id)filters;
- (id)initWithClientView:(id)arg1;
- (id)primaryCaptureGroup;
- (void)setClientView:(id)arg1;
- (void)setContainedView:(id)arg1;
- (void)setFilters:(id)arg1;
- (void)setPrimaryCaptureGroup:(id)arg1;
- (void)setViewEffects:(id)arg1;
- (id)viewEffects;

@end
