
@protocol FBSSceneCreating <NSObject>

@optional

- (void)configureParameters:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FBSMutableSceneParameters *, void*
- (void)configureTransition:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FBSSceneTransitionContext *, void*
- (void)setIdentifier:(NSString *)arg1;
- (void)setSpecification:(FBSSceneSpecification *)arg1;

@end
