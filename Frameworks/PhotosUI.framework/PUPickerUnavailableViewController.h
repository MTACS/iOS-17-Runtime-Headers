
@interface PUPickerUnavailableViewController : UIViewController {
    PHPickerConfiguration * _configuration;
    <_PUPickerUnavailableViewControllerDelegate> * _delegate;
    NSError * _error;
    unsigned long long  _reason;
}

@property (nonatomic, readonly) PHPickerConfiguration *configuration;
@property (nonatomic) <_PUPickerUnavailableViewControllerDelegate> *delegate;
@property (nonatomic, readonly, copy) NSError *error;
@property (nonatomic, readonly) unsigned long long reason;

+ (id)unavailableViewController:(unsigned long long)arg1 configuration:(id)arg2 error:(id)arg3 delegate:(id)arg4;

- (void).cxx_destruct;
- (void)askDelegateToCancel;
- (void)askDelegateToRetry;
- (void)cancelButtonTapped:(id)arg1;
- (id)configuration;
- (id)delegate;
- (id)error;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithReason:(unsigned long long)arg1 configuration:(id)arg2 error:(id)arg3;
- (unsigned long long)reason;
- (id)reasonDebugDescription;
- (void)setDelegate:(id)arg1;
- (id)unavailableButtonTitle;
- (id)unavailableKey;
- (id)unavailableMessage;
- (id)unavailableTitle;
- (void)updateReason:(unsigned long long)arg1 error:(id)arg2;
- (void)updateUnavailableView;
- (void)viewDidLoad;

@end
