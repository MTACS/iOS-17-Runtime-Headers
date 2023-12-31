
@interface VUIActionTypeGDPR : VUIAction {
    VUIAppContext * _appContext;
    NSDictionary * _contextData;
}

@property (nonatomic) VUIAppContext *appContext;
@property (nonatomic, retain) NSDictionary *contextData;

- (void).cxx_destruct;
- (id)appContext;
- (id)contextData;
- (id)initWithContextData:(id)arg1 appContext:(id)arg2;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setAppContext:(id)arg1;
- (void)setContextData:(id)arg1;

@end
