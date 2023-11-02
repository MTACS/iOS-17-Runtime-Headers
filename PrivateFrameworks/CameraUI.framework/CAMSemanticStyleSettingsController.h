
@interface CAMSemanticStyleSettingsController : UINavigationController {
    CAMSemanticStyleSettingsRootController * __rootController;
    <CAMSemanticStyleSettingsControllerDelegate> * _controllerDelegate;
}

@property (nonatomic, readonly) CAMSemanticStyleSettingsRootController *_rootController;
@property (nonatomic) <CAMSemanticStyleSettingsControllerDelegate> *controllerDelegate;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_rootController;
- (id)controllerDelegate;
- (id)init;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)setControllerDelegate:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;

@end
