
@interface BSUIVibrancyBackdropView : UIView

@property (nonatomic, readonly) CABackdropLayer *backdropLayer;

+ (Class)layerClass;

- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)backdropLayer;

@end
