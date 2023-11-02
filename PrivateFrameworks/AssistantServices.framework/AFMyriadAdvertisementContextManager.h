
@interface AFMyriadAdvertisementContextManager : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    AFSettingsConnection * _settingsConnection;
}

- (void).cxx_destruct;
- (void)_resetSettingsConnection;
- (id)_settingsConnection;
- (id)initWithQueue:(id)arg1;
- (void)pushMyriadAdvertisementContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)reset;
- (void)triggerABCForType:(id)arg1 subType:(id)arg2 context:(id)arg3;

@end
