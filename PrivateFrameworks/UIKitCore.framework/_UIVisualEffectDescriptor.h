
@interface _UIVisualEffectDescriptor : NSObject {
    bool  _allowsVibrancyInContent;
    long long  _alphaTransition;
    bool  _contentViewRequiresClipping;
    bool  _disableInPlaceFiltering;
    NSMutableArray * _filterEntries;
    UIView<_UIVisualEffectViewParticipating> * _identityContainerView;
    bool  _layerHitTestsAsOpaque;
    NSMutableArray * _overlays;
    bool  _requestAlphaTransition;
    UIView<_UIVisualEffectViewParticipating> * _requestedContainerView;
    bool  _textShouldRenderWithTintColor;
    NSMutableArray * _underlays;
    NSMutableArray * _viewEffects;
}

@property (nonatomic, retain) UIView<_UIVisualEffectViewParticipating> *_identityContainerView;
@property (nonatomic, retain) UIView<_UIVisualEffectViewParticipating> *_requestedContainerView;
@property (nonatomic) bool allowsVibrancyInContent;
@property (nonatomic) long long alphaTransition;
@property (nonatomic, retain) UIView<_UIVisualEffectViewParticipating> *containerView;
@property (nonatomic) bool contentViewRequiresClipping;
@property (nonatomic) bool disableInPlaceFiltering;
@property (nonatomic, copy) NSArray *filterEntries;
@property (nonatomic) bool layerHitTestsAsOpaque;
@property (nonatomic, copy) NSArray *overlays;
@property (nonatomic) bool requestAlphaTransition;
@property (nonatomic) bool textShouldRenderWithTintColor;
@property (nonatomic, copy) NSArray *underlays;
@property (nonatomic, copy) NSArray *viewEffects;

+ (id)newTransitionDescriptorForStops:(id)arg1;

- (void).cxx_destruct;
- (id)_identityContainerView;
- (id)_requestedContainerView;
- (void)addFilterEntry:(id)arg1;
- (void)addOverlay:(id)arg1;
- (void)addUnderlay:(id)arg1;
- (void)addViewEffect:(id)arg1;
- (bool)allowsVibrancyInContent;
- (long long)alphaTransition;
- (id)containerView;
- (bool)contentViewRequiresClipping;
- (id)copyForTransitionToDescriptor:(id)arg1;
- (id)description;
- (bool)disableInPlaceFiltering;
- (id)filterEntries;
- (id)init;
- (bool)layerHitTestsAsOpaque;
- (id)overlays;
- (bool)requestAlphaTransition;
- (void)setAllowsVibrancyInContent:(bool)arg1;
- (void)setAlphaTransition:(long long)arg1;
- (void)setContainerView:(id)arg1;
- (void)setContentViewRequiresClipping:(bool)arg1;
- (void)setDisableInPlaceFiltering:(bool)arg1;
- (void)setFilterEntries:(id)arg1;
- (void)setLayerHitTestsAsOpaque:(bool)arg1;
- (void)setOverlays:(id)arg1;
- (void)setRequestAlphaTransition:(bool)arg1;
- (void)setTextShouldRenderWithTintColor:(bool)arg1;
- (void)setUnderlays:(id)arg1;
- (void)setViewEffects:(id)arg1;
- (void)set_identityContainerView:(id)arg1;
- (void)set_requestedContainerView:(id)arg1;
- (bool)textShouldRenderWithTintColor;
- (id)underlays;
- (void)uniqueFilterNames;
- (id)viewEffects;

@end
