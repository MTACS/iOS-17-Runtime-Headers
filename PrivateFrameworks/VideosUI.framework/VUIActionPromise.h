
@interface VUIActionPromise : VUIAction {
    VUIAppContext * _appContext;
    NSDictionary * _contextDataDictionary;
}

@property (nonatomic) VUIAppContext *appContext;
@property (nonatomic, readonly) NSDictionary *contextDataDictionary;

- (void).cxx_destruct;
- (id)appContext;
- (id)contextDataDictionary;
- (id)initWithContextData:(id)arg1 appContext:(id)arg2;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setAppContext:(id)arg1;

@end
