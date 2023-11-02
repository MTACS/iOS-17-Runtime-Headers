
@interface SBOverlayUISceneController : SBSystemUISceneController {
    SBSingleSceneController * _subterraneanSceneController;
}

+ (id)_setupInfo;

- (void).cxx_destruct;
- (bool)_isAllowedToRecreateSceneOnConnectingWindowScene:(id)arg1;
- (id)_subterraneanSceneIdentifierForWindowScene:(id)arg1;
- (void)windowSceneDidConnect:(id)arg1;

@end
