
@protocol TSDWrapInvalidationParent

@required

- (void)beginResizeWrapInvalidationCluster;
- (void)endResizeWrapInvalidationCluster;
- (void)wrappableChildInvalidated:(id <TSDWrappable>)arg1;

@end
