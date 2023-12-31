
@interface WFTemperatureUnitProvider : NSObject {
    NSObject<OS_dispatch_queue> * _providerQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *providerQueue;
@property (readonly) int userTemperatureUnit;

- (void).cxx_destruct;
- (void)_postDidChangeUnitDefaultsPreference;
- (int)_providerQueue_changeUnit:(int)arg1;
- (int)_providerQueue_readUnit;
- (void)fetchTemperatureUnitWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)providerQueue;
- (void)replaceUnit:(int)arg1;
- (void)replaceUnit:(int)arg1 completionHandler:(id /* block */)arg2;
- (void)setProviderQueue:(id)arg1;
- (int)userTemperatureUnit;

@end
