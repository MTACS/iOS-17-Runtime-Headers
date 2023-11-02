
@interface DNDSUserAvailabilityIntentLauncher : NSObject {
    LSApplicationRecord * _applicationRecord;
    bool  _available;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _completionFiredFlag;
    INCExtensionConnection * _connection;
}

- (void).cxx_destruct;
- (void)_cleanupWithError:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithApplicationRecord:(id)arg1 available:(bool)arg2;
- (void)launchIntentExtensionWithCompletion:(id /* block */)arg1;

@end
