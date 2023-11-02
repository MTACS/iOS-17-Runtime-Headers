
@interface VUIActionAppPunchout : VUIAction {
    VUIAppContext * _appContext;
    bool  _isSensitiveURL;
    NSDictionary * _metrics;
    NSURL * _punchoutURL;
}

@property (nonatomic) VUIAppContext *appContext;
@property (nonatomic, readonly) bool isSensitiveURL;
@property (nonatomic, retain) NSDictionary *metrics;
@property (nonatomic, readonly) NSURL *punchoutURL;

- (void).cxx_destruct;
- (id)_addMusicAppMetricsToUrl:(id)arg1;
- (void)_openPunchoutURL:(id)arg1;
- (id)appContext;
- (id)initWithContextData:(id)arg1 appContext:(id)arg2;
- (bool)isSensitiveURL;
- (id)metrics;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)punchoutURL;
- (void)setAppContext:(id)arg1;
- (void)setMetrics:(id)arg1;

@end
