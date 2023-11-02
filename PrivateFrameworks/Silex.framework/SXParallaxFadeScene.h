
@interface SXParallaxFadeScene : SXComponentAnimation

@property (nonatomic, readonly) UIColor *fadeColor;

- (Class)handlerClass;
- (bool)userControllable;

@end
