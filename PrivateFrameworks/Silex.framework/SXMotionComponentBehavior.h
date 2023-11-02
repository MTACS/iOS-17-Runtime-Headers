
@interface SXMotionComponentBehavior : SXComponentBehavior

@property (nonatomic, readonly) double amplitude;
@property (nonatomic, readonly) bool horizontal;
@property (nonatomic, readonly) bool vertical;
@property (nonatomic, readonly) bool windowed;

- (Class)handlerClassForComponent:(id)arg1;

@end
