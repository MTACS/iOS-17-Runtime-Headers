
@protocol SBInCallPresentationSessionDelegate <NSObject>

@required

- (<BSInvalidatable> *)inCallClientPresentationSession:(SBInCallPresentationSession *)arg1 acquireHideSharePlayContentFromClonedDisplaysAssertionForReason:(NSString *)arg2;
- (void)inCallClientPresentationSession:(SBInCallPresentationSession *)arg1 callConnectedStatusChangedForPresentableViewController:(SBInCallBannerPresentableViewController *)arg2;
- (bool)inCallClientPresentationSession:(SBInCallPresentationSession *)arg1 canRestoreToPreviousEntity:(SBWorkspaceEntity *)arg2;
- (void)inCallClientPresentationSession:(void *)arg1 handleDestroySceneActionWithReason:(void *)arg2 analyticsSource:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: SBInCallPresentationSession *, long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)inCallClientPresentationSessionAmbientPresentationActive:(SBInCallPresentationSession *)arg1;
- (long long)inCallClientPresentationSessionInterfaceOrientationForBannerPresentation:(SBInCallPresentationSession *)arg1;
- (long long)inCallClientPresentationSessionInterfaceOrientationForTransientOverlayPresentation:(SBInCallPresentationSession *)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })inCallClientPresentationSessionResolvedPIPDodgingInsets:(SBInCallPresentationSession *)arg1;
- (void)inCallClientPresentationSessionSceneWasDestroyed:(SBInCallPresentationSession *)arg1;

@end
