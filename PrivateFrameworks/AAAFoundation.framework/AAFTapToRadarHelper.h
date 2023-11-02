
@interface AAFTapToRadarHelper : NSObject

- (unsigned long long)_adjustedOptionFlags:(unsigned long long)arg1;
- (void)_launchTTRWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)_notificationDictionaryForRequest:(id)arg1;
- (void)_showAlertForRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)handleRadarRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)silentTapToRadarWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)tapToRadarWithRequest:(id)arg1 completion:(id /* block */)arg2;

@end
