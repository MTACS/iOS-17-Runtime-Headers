
@interface AISChildSetupPresenter : NSObject {
    void analytics;
    void childSetupAnalyticsEvent;
    void childSetupStore;
    void currentStep;
    void delegate;
    void nextStepReadyTask;
    void presentationHandler;
    void settings;
}

@property (nonatomic, readonly) <AISChildSetupStoreProtocol> *childSetupStore;
@property (nonatomic) <AISChildSetupPresenterDelegate> *delegate;
@property (nonatomic, retain) UIViewController<AISViewControllerPresentationHandlerProtocol> *presentationHandler;

- (void).cxx_destruct;
- (id)childSetupStore;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)presentationHandler;
- (void)setDelegate:(id)arg1;
- (void)setPresentationHandler:(id)arg1;
- (void)startFlowWithViewControllerPresentationHandler:(id)arg1;

@end
