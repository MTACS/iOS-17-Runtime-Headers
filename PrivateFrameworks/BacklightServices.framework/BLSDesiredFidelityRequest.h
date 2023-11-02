
@interface BLSDesiredFidelityRequest : NSObject {
    id /* block */  _completion;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_completed;
}

- (void).cxx_destruct;
- (void)completeWithDesiredFidelity:(long long)arg1;
- (id)initWithCompletion:(id /* block */)arg1;

@end
