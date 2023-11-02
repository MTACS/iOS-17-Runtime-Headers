
@interface UIScenePresentationContext : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {
    UIScenePresentationContext * _defaultPresentationContext;
    BSMutableSettings * _settings;
    UIMutableTransformer * _transformer;
}

@property (nonatomic, readonly) UIScenePresentationContext *_defaultPresentationContext;
@property (nonatomic, readonly, copy) NSSet *_exclusiveLayerTargetsToInclude;
@property (nonatomic, readonly, copy) NSSet *_layerTargetsToExclude;
@property (nonatomic, readonly, copy) NSString *_minificationFilterName;
@property (getter=_isVisibilityPropagationEnabled, nonatomic, readonly) bool _visibilityPropagationEnabled;
@property (nonatomic, readonly) unsigned long long appearanceStyle;
@property (nonatomic, readonly, copy) UISceneAsynchronousRenderingOptions *asynchronousRenderingOptions;
@property (nonatomic, readonly, copy) UIColor *backgroundColorWhileHosting;
@property (nonatomic, readonly, copy) UIColor *backgroundColorWhileNotHosting;
@property (getter=isClippingDisabled, nonatomic, readonly) bool clippingDisabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) UITransformer *hostTransformer;
@property (nonatomic, readonly) bool inheritsSecurity;
@property (nonatomic, readonly, copy) NSDictionary *layerPresentationOverrides;
@property (nonatomic, readonly) unsigned long long presentedLayerTypes;
@property (nonatomic, readonly) unsigned long long renderingMode;
@property (nonatomic, readonly) bool resizesHostedContext;
@property (nonatomic, readonly) bool shouldPassthroughHitTestEventsIfTransparent;
@property (nonatomic, readonly) bool stopsHitTestTransformAccumulation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_defaultPresentationContext;
- (id)_exclusiveLayerTargetsToInclude;
- (id)_initWithDefaultPresentationContext:(id)arg1;
- (id)_initWithDefaultValues;
- (id)_initWithPresentationContext:(id)arg1;
- (id)_initWithSettings:(id)arg1 defaultPresentationContext:(id)arg2;
- (bool)_isVisibilityPropagationEnabled;
- (id)_layerTargetsToExclude;
- (id)_minificationFilterName;
- (unsigned long long)appearanceStyle;
- (id)asynchronousRenderingOptions;
- (id)backgroundColorWhileHosting;
- (id)backgroundColorWhileNotHosting;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (id)hostTransformer;
- (bool)inheritsSecurity;
- (id)init;
- (bool)isClippingDisabled;
- (bool)isEqual:(id)arg1;
- (id)layerPresentationOverrides;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)presentedLayerTypes;
- (unsigned long long)renderingMode;
- (bool)resizesHostedContext;
- (bool)shouldPassthroughHitTestEventsIfTransparent;
- (bool)stopsHitTestTransformAccumulation;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
