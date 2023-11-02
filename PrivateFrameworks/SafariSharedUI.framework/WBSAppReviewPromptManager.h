
@interface WBSAppReviewPromptManager : NSObject {
    <WBSAppReviewPromptPresenting> * _presenter;
    WBSWebExtensionsController * _webExtensionsController;
}

@property (nonatomic) <WBSAppReviewPromptPresenting> *presenter;

- (void).cxx_destruct;
- (void)_presentIfNeeded;
- (bool)_shouldPromptForReview;
- (void)didDismissReaderWithScrollPercentage:(double)arg1 dateReaderOpened:(id)arg2;
- (id)init;
- (id)initWithPresenter:(id)arg1 extensionsController:(id)arg2;
- (id)presenter;
- (void)setPresenter:(id)arg1;

@end
