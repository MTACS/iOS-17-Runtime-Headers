
@interface PXPlacesMapOptionsController : NSObject <PXMapOptionsChooseMapViewDelegate, PXMapOptionsViewDelegate> {
    void currentChooseMapSheetController;
    void delegate;
    void enableUserTrackingButton;
    void locationAuthorizationMonitor;
    void locationAuthorizationMonitorObservation;
    void mapFetchResultController;
    void mapModeController;
    void presentingViewController;
}

@property (nonatomic) <PXPlacesMapOptionsControllerDelegate> *delegate;
@property (nonatomic) bool enableUserTrackingButton;
@property (nonatomic, readonly) unsigned long long mapStyle;
@property (nonatomic, readonly) unsigned long long perspectiveButtonState;

- (void).cxx_destruct;
- (void)chooseMapViewDidTapAttributionWithURL:(id)arg1;
- (void)chooseMapViewDidTapCardForMapStyle:(unsigned long long)arg1;
- (id)delegate;
- (bool)enableUserTrackingButton;
- (id)init;
- (id)initWithMapModeController:(id)arg1 mapFetchResultController:(id)arg2 presentingViewController:(id)arg3 locationAuthorizationMonitor:(id)arg4;
- (void)mapOptionsViewDidTapMapModeSettingsButton:(id)arg1;
- (void)mapOptionsViewDidTapPerspective2DButton:(id)arg1;
- (void)mapOptionsViewDidTapPerspective3DButton:(id)arg1;
- (unsigned long long)mapStyle;
- (unsigned long long)perspectiveButtonState;
- (void)setDelegate:(id)arg1;
- (void)setEnableUserTrackingButton:(bool)arg1;

@end
