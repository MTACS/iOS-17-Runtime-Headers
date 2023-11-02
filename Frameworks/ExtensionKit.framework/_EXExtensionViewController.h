
@interface _EXExtensionViewController : UIViewController <_EXConnectionHandler> {
    UIViewController * _contentViewController;
    _EXViewControllerSceneConfiguration * _sceneConfiguration;
}

@property (readonly) UIViewController *contentViewController;
@property (retain) _EXViewControllerSceneConfiguration *sceneConfiguration;

- (void).cxx_destruct;
- (id)contentViewController;
- (void)loadView;
- (id)makeContentViewController;
- (id)sceneConfiguration;
- (void)setSceneConfiguration:(id)arg1;
- (bool)shouldAcceptXPCConnection:(id)arg1;

@end
