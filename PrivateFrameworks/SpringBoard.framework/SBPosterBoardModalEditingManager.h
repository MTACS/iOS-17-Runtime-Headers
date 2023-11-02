
@interface SBPosterBoardModalEditingManager : NSObject <PRUIExternallyHostedPosterEditingServerDelegate, SBPosterEditingTransientOverlayViewControllerDelegate> {
    PRUIExternallyHostedPosterEditingServer * _posterEditingServer;
    NSMutableArray * _presentedTransientOverlayControllers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismissTransientOverlayViewControllerIfPresenting:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_presentTransientOverlayViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (bool)beginExternalPosterEditingSessionWithEditingRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)posterEditingTransientOverlayViewController:(id)arg1 didDismissWithResponse:(id)arg2;
- (void)posterEditingTransientOverlayViewController:(id)arg1 willDismissWithResponse:(id)arg2;
- (void)sendRequestDismissalActionWithEditingRequest:(id)arg1;

@end
