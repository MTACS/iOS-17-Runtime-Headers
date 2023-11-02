
@interface VUIActionLocationPrompt : VUIAction {
    id /* block */  _completionHandler;
    NSDictionary * _dialogMetrics;
    bool  _geoLocationEnforced;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) NSDictionary *dialogMetrics;
@property (nonatomic) bool geoLocationEnforced;

- (void).cxx_destruct;
- (void)_locationAuthorizationStatusDidChange:(id)arg1;
- (id /* block */)completionHandler;
- (id)dialogMetrics;
- (bool)geoLocationEnforced;
- (id)initWithContextData:(id)arg1;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDialogMetrics:(id)arg1;
- (void)setGeoLocationEnforced:(bool)arg1;

@end
