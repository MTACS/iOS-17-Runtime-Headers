
@interface _SBActiveRemoteTransientOverlayViewProviderAdapter : NSObject <SBDeviceApplicationRemoteTransientOverlayViewProviding> {
    SBDeviceApplicationRemoteTransientOverlayViewProvider * _sceneBackedProvider;
    SBDeviceApplicationRemoteTransientOverlayViewProvider * _viewServiceProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) SBDeviceApplicationRemoteTransientOverlayViewProvider *sceneBackedProvider;
@property (readonly) Class superclass;
@property (nonatomic) SBDeviceApplicationRemoteTransientOverlayViewProvider *viewServiceProvider;
@property (nonatomic, readonly) SBWindowScene *windowScene;

- (void).cxx_destruct;
- (void)dismissRemoteTransientOverlayViewController:(id)arg1;
- (bool)isPresentingOnBehalfOfApplication:(id)arg1;
- (bool)isPresentingTransientOverlay:(id)arg1;
- (void)presentRemoteTransientOverlayViewController:(id)arg1 presentationRequest:(id)arg2;
- (id)sceneBackedProvider;
- (void)setSceneBackedProvider:(id)arg1;
- (void)setViewServiceProvider:(id)arg1;
- (id)viewServiceProvider;
- (id)windowScene;

@end
