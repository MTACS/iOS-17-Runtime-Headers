
@interface CSVoiceTriggerAlwaysOnProcessor : NSObject {
    NSObject<OS_dispatch_group> * _aopSwitchGroup;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_setBuiltInRTModelDictionary:(id)arg1;
- (void)disableVoiceTriggerOnAlwaysOnProcessorWithCompletion:(id /* block */)arg1;
- (void)enableVoiceTriggerOnAlwaysOnProcessorWithAsset:(id)arg1 completion:(id /* block */)arg2;
- (id)init;

@end
