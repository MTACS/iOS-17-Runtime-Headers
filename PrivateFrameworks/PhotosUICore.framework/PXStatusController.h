
@interface PXStatusController : NSObject <PXChangeObserver> {
    UIContentUnavailableConfiguration * _configuration;
    <NSObject> * _confirmationAlertToken;
    <PXStatusControllerDelegate> * _delegate;
    PXStatusViewModel * _viewModel;
}

@property (nonatomic, readonly) UIContentUnavailableConfiguration *configuration;
@property (nonatomic, retain) <NSObject> *confirmationAlertToken;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXStatusControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) PXStatusViewModel *viewModel;

- (void).cxx_destruct;
- (void)_handleButtonAction:(id)arg1;
- (void)_updateButtonTitle;
- (void)_updateMessage;
- (void)_updateTitle;
- (id)configuration;
- (id)confirmationAlertToken;
- (id)delegate;
- (id)init;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setConfirmationAlertToken:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)viewModel;

@end
