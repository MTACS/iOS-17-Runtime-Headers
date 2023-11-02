
@interface CSVoiceTriggerAssetHandler : NSObject {
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)assetHandlerFactoryWithDisableOnDeviceCompilation:(bool)arg1;
+ (id)sharedHandler;
+ (id)sharedHandlerDisabledOnDeviceCompilation;

- (void).cxx_destruct;
- (id)defaultFallbackModelIfNil:(id)arg1;
- (void)getVoiceTriggerAssetWithEndpointId:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)notifyObservers:(id)arg1 endpointId:(id)arg2;
- (id)observers;
- (id)queue;
- (void)registerObserver:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end
