
@interface ChronoCore.AmbientSceneDelegate : ChronoCore.ActivitySceneDelegate {
    void _cancellables;
    void _viewController;
    void _viewModel;
}

- (void).cxx_destruct;
- (id)init;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;
- (void)sceneDidDisconnect:(id)arg1;
- (void)sceneWillEnterForeground:(id)arg1;

@end
