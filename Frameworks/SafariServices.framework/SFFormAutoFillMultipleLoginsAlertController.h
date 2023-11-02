
@interface SFFormAutoFillMultipleLoginsAlertController : UIAlertController {
    UIAlertAction * _cancelAction;
    bool  _cancelsWhenAppEntersBackground;
}

@property (nonatomic) bool cancelsWhenAppEntersBackground;

+ (id)alertControllerWithMatchesFromFormProtectionSpace:(id)arg1 matchesFromOtherProtectionSpaces:(id)arg2 externalCredentials:(id)arg3 preferredStyle:(long long)arg4 formURL:(id)arg5 completionHandler:(id /* block */)arg6;

- (void).cxx_destruct;
- (void)_sceneDidEnterBackground:(id)arg1;
- (bool)cancelsWhenAppEntersBackground;
- (void)setCancelsWhenAppEntersBackground:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
