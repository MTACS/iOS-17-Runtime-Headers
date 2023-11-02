
@interface CNKCallDetailsCoordinatorInternal : NSObject <CNKCallDetailsCoordinatorProtocol, CNKConversationHUDDetailsViewControllerDelegate> {
    void controlsManager;
    void deferredPresentationManager;
    void detailsNavigationController;
    void hostViewController;
    void shouldHideViewsFromScreenSharing;
}

@property (nonatomic, readonly) bool isCaptioningEnabled;
@property (nonatomic) bool shouldHideViewsFromScreenSharing;

- (void).cxx_destruct;
- (id)init;
- (id)initWithHostViewController:(id)arg1 controlsManager:(id)arg2 deferredPresentationManager:(id)arg3;
- (bool)isCaptioningEnabled;
- (void)setShouldHideViewsFromScreenSharing:(bool)arg1;
- (bool)shouldHideViewsFromScreenSharing;
- (void)startWithReason:(id)arg1;
- (void)stopWithReason:(id)arg1;
- (void)wantsDismissal;

@end
