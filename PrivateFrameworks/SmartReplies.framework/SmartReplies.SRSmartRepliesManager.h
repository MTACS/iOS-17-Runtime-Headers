
@interface SmartReplies.SRSmartRepliesManager : NSObject {
    void $__lazy_storage_$_actionMetadataController;
    void $__lazy_storage_$_biomeManager;
    void $__lazy_storage_$_modelResponseManager;
    void $__lazy_storage_$_rkManager;
    void metricsRecorder;
}

+ (id)shared;

- (void).cxx_destruct;
- (id)init;
- (void)registerResponseDisplayedAtIndex:(id)arg1 displaySetting:(id)arg2;
- (void)registerResponseFor:(id)arg1 message:(id)arg2 time:(id)arg3 metadata:(id)arg4 language:(id)arg5;
- (id)suggestionsFor:(id)arg1;
- (void)suggestionsFor:(id)arg1 completion:(id /* block */)arg2;

@end
