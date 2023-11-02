
@interface UISceneLayerPresentationContext : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {
    double  _alpha;
    bool  _clippingDisabled;
    bool  _hidden;
    NSString * _minificationFilterName;
    unsigned long long  _renderingMode;
    UITransformer * _transformer;
}

@property (setter=_setMinificationFilterName:, nonatomic, copy) NSString *_minificationFilterName;
@property (nonatomic) double alpha;
@property (getter=isClippingDisabled, nonatomic) bool clippingDisabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic) unsigned long long renderingMode;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITransformer *transformer;

- (void).cxx_destruct;
- (id)_initWithSceneLayerPresentationContext:(id)arg1;
- (bool)_isEqualToDefaultContext;
- (id)_minificationFilterName;
- (void)_setMinificationFilterName:(id)arg1;
- (double)alpha;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isClippingDisabled;
- (bool)isEqual:(id)arg1;
- (bool)isHidden;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)renderingMode;
- (void)setAlpha:(double)arg1;
- (void)setClippingDisabled:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setRenderingMode:(unsigned long long)arg1;
- (void)setTransformer:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)transformer;

@end
