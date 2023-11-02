
@interface SXQuickLookViewController : UIViewController <SXQuickLookEventHandlerDelegate> {
    UILabel * _errorLabel;
    NFStateMachineState * _errorState;
    <SXQuickLookEventHandler> * _eventHandler;
    NFStateMachineState * _loadingState;
    NFStateMachineState * _presentingState;
    <SXQuickLookRenderer> * _renderer;
    NFStateMachine * _stateMachine;
    UIButton * _thumbnailControl;
    UIImageView * _thumbnailImageView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UILabel *errorLabel;
@property (nonatomic, readonly) NFStateMachineState *errorState;
@property (nonatomic, readonly) <SXQuickLookEventHandler> *eventHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NFStateMachineState *loadingState;
@property (nonatomic, readonly) NFStateMachineState *presentingState;
@property (nonatomic, readonly) <SXQuickLookRenderer> *renderer;
@property (nonatomic, readonly) NFStateMachine *stateMachine;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIButton *thumbnailControl;
@property (nonatomic, readonly) UIImageView *thumbnailImageView;

- (void).cxx_destruct;
- (void)configureStateMachine;
- (id)createErrorState;
- (id)createLoadingState;
- (id)createPresentingState;
- (id)errorLabel;
- (id)errorState;
- (id)eventHandler;
- (void)handleTap;
- (id)initWithEventHandler:(id)arg1 renderer:(id)arg2;
- (id)loadingState;
- (id)presentingState;
- (id)renderer;
- (void)showThumbnailErrorWithMessage:(id)arg1;
- (void)showThumbnailImage:(id)arg1;
- (id)stateMachine;
- (id)thumbnailControl;
- (id)thumbnailImageView;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
