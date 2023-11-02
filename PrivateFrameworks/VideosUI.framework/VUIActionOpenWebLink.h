
@interface VUIActionOpenWebLink : VUIAction {
    VUIActionAppPunchout * _actionPunchout;
    VUIAppContext * _appContext;
    NSDictionary * _contextData;
    NSDictionary * _metrics;
    NSString * _webUrl;
}

@property (nonatomic, retain) VUIActionAppPunchout *actionPunchout;
@property (nonatomic) VUIAppContext *appContext;
@property (nonatomic, retain) NSDictionary *contextData;
@property (nonatomic, retain) NSDictionary *metrics;
@property (nonatomic, retain) NSString *webUrl;

- (void).cxx_destruct;
- (id)actionPunchout;
- (id)appContext;
- (id)contextData;
- (id)initWithContextData:(id)arg1 appContext:(id)arg2;
- (id)metrics;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setActionPunchout:(id)arg1;
- (void)setAppContext:(id)arg1;
- (void)setContextData:(id)arg1;
- (void)setMetrics:(id)arg1;
- (void)setWebUrl:(id)arg1;
- (id)webUrl;

@end
