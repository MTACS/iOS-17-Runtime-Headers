
@interface WLTransferringViewController : WLOnboardingProgressViewController <OBSetupAssistantSupport> {
    id /* block */  _cancellationBlock;
    unsigned long long  _completedOperationCount;
    NSString * _importProgressDescription;
    bool  _isImporting;
    double  _remainingDownloadTime;
    NSDateComponentsFormatter * _remainingDownloadTimeFormatter;
    NSObject<OS_dispatch_source> * _remainingDownloadTimeUpdateTimer;
    bool  _showCancelButton;
    unsigned long long  _totalOperationCount;
    NSString * _transferProgressDescription;
    id /* block */  _viewWillDismissBlock;
    WLWelcomeController * _welcomeController;
}

@property (nonatomic, copy) id /* block */ cancellationBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isImporting;
@property (nonatomic) bool showCancelButton;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ viewWillDismissBlock;

- (void).cxx_destruct;
- (void)_cancelRemainingDownloadTimeUpdateTimer;
- (void)cancel;
- (id /* block */)cancellationBlock;
- (void)dealloc;
- (id)initWithSourceDevice:(id)arg1 welcomeController:(id)arg2;
- (bool)isImporting;
- (void)setCancellationBlock:(id /* block */)arg1;
- (void)setCompletedOperationCount:(unsigned long long)arg1 totalOperationCount:(unsigned long long)arg2;
- (void)setIsImporting:(bool)arg1;
- (void)setProgressText:(id)arg1;
- (void)setRemainingDownloadTime:(double)arg1;
- (void)setShowCancelButton:(bool)arg1;
- (void)setViewWillDismissBlock:(id /* block */)arg1;
- (void)showActivityIndicatorView;
- (bool)showCancelButton;
- (void)updateProgressText;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (id /* block */)viewWillDismissBlock;

@end
