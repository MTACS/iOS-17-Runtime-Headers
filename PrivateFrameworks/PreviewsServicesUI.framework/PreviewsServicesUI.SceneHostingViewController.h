
@interface PreviewsServicesUI.SceneHostingViewController : UIViewController {
    void currentActivationRequest;
    void deactivatedHandler;
    void firstResponderStatus;
    void host;
    void identifier;
    void isUserActivePreview;
    void readyForDisplay;
    void sceneObservationToken;
}

@property (nonatomic, readonly) bool canBecomeFirstResponder;

- (void).cxx_destruct;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)resignFirstResponder;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
