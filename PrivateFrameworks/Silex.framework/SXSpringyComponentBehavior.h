
@interface SXSpringyComponentBehavior : SXComponentBehavior

@property (nonatomic, readonly) double damping;
@property (nonatomic, readonly) double delta;
@property (nonatomic, readonly) double frequency;

- (Class)handlerClassForComponent:(id)arg1;

@end
