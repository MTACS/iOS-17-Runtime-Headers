
@interface UserActivityController : NSObject {
    BrowserController * _browserController;
    NSTimer * _tabCreationDelayTimer;
    TabDocument * _tabDocumentPendingUserActivityPayload;
}

@property (nonatomic, readonly) BrowserController *browserController;
@property (nonatomic) TabDocument *tabDocumentPendingUserActivityPayload;

- (void).cxx_destruct;
- (void)_invalidateTabCreationDelayTimer;
- (void)_prepareTabDocumentForNewUserActivity;
- (void)_prepareTabDocumentForNewUserActivityWithDelay:(double)arg1;
- (id)_tabDocumentWithURL:(id)arg1;
- (id)browserController;
- (bool)continueUserActivity:(id)arg1;
- (void)didFailToContinueUserActivityWithType:(id)arg1 error:(id)arg2;
- (id)initWithBrowserController:(id)arg1;
- (void)setTabDocumentPendingUserActivityPayload:(id)arg1;
- (id)tabDocumentPendingUserActivityPayload;
- (bool)willContinueUserActivityWithType:(id)arg1;

@end
