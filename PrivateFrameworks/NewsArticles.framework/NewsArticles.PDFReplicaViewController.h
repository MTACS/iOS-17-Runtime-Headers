
@interface NewsArticles.PDFReplicaViewController : UIViewController <PDFViewDelegate, UIGestureRecognizerDelegate> {
    void commands;
    void contentBackgroundColor;
    void coverViewManager;
    void delegate;
    void eventHandler;
    void focusableView;
    void identifier;
    void keyCommandManager;
    void loadingIndicatorProvider;
    void loadingStateMachine;
    void paywallPreparationEventManager;
    void pdfView;
    void pinchRecognizer;
    void styler;
}

@property (nonatomic, readonly) bool canBecomeFirstResponder;
@property (nonatomic, readonly) NSArray *keyCommands;

- (void).cxx_destruct;
- (void)PDFViewWillClickOnLink:(id)arg1 withURL:(id)arg2;
- (bool)canBecomeFirstResponder;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleKeyCommandWithKeyCommand:(id)arg1;
- (void)handlePinchGesture;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)keyCommands;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
