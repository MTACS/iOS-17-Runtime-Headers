
@interface CSSmartSiriVolumeRunPolicy : CSPolicy {
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_addSmartSiriVolumeEnabledConditions;
- (void)_subscribeEventMonitors;
- (id)init;

@end
