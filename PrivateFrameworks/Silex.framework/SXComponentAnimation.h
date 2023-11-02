
@interface SXComponentAnimation : SXJSONObject

@property (nonatomic, readonly) int transitionBehavior;
@property (nonatomic, readonly) bool userControllable;

- (Class)handlerClass;
- (int)transitionBehavior;

@end
