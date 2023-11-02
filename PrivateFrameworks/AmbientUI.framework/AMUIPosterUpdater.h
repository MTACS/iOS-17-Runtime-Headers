
@interface AMUIPosterUpdater : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    _AMUIPosterUpdate * _lock_inflightInfographConfigurationUpdate;
    _AMUIPosterUpdate * _lock_pendingInfographConfigurationUpdate;
    PRSService * _lock_service;
}

+ (id)defaultUpdater;

- (void).cxx_destruct;
- (void)_clearInflightAndFireNextRequest;
- (void)_lock_fireInfographUpdate:(id)arg1;
- (id)init;
- (bool)updateInfograph:(id)arg1 forPosterConfiguration:(id)arg2 completion:(id /* block */)arg3;

@end
