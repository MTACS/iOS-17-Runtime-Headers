
@interface UIMutableSceneLayerPresentationContext : UISceneLayerPresentationContext

@property (nonatomic) double alpha;
@property (getter=isClippingDisabled, nonatomic) bool clippingDisabled;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic) unsigned long long renderingMode;
@property (nonatomic, retain) UITransformer *transformer;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
