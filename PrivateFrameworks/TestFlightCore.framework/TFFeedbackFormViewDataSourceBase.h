
@interface TFFeedbackFormViewDataSourceBase : NSObject {
    TFFeedbackFormPresenter * _presenter;
    id /* block */  _refreshCallback;
}

@property (nonatomic, retain) TFFeedbackFormPresenter *presenter;
@property (nonatomic, copy) id /* block */ refreshCallback;

- (void).cxx_destruct;
- (void)addScreenshots:(id)arg1;
- (id)initWithPresenter:(id)arg1 refreshCallback:(id /* block */)arg2;
- (id)presenter;
- (id /* block */)refreshCallback;
- (void)removeScreenshot:(id)arg1;
- (void)resetScreenshots:(id)arg1;
- (unsigned long long)screenshotCount;
- (void)setPresenter:(id)arg1;
- (void)setRefreshCallback:(id /* block */)arg1;

@end
