
@protocol _UISceneLayerHostContainerViewDataSource <NSObject>

@required

- (UIView *)backgroundView;
- (NSString *)identifier;
- (UIScenePresentationContext *)presentationContextForSceneLayerHostContainerView;

@end
