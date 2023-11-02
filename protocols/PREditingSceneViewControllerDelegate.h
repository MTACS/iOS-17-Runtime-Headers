
@protocol PREditingSceneViewControllerDelegate <NSObject>

@optional

- (void)editingSceneViewController:(void *)arg1 userDidDismissWithAction:(void *)arg2 updatedConfiguration:(void *)arg3 updatedConfiguredProperties:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: PREditingSceneViewController *, long long, PRMutablePosterConfiguration *, PRPosterConfiguredProperties *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)editingSceneViewController:(PREditingSceneViewController *)arg1 wantsRemotePresentationOfViewController:(UIViewController *)arg2 contentScreenRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct PREditingSceneViewControllerTopButtonLayout { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; })topButtonLayoutForEditingSceneViewController:(PREditingSceneViewController *)arg1;

@end
