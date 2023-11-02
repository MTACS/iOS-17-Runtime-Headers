
@interface PKPaletteTapToRadarRegularExecution : PKPaletteTapToRadarCommandExecution <PKTextInputDebugRadarViewControllerDelegate, UIAdaptivePresentationControllerDelegate> {
    UIWindow * _window;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismiss;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)debugRadarViewControllerDidDismiss:(id)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)run;

@end
