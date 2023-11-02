
@interface _PKPendingEnhancedMerchantNearbyLocationSearch : NSObject {
    NSMutableArray * _completionHandlers;
    NSError * _error;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    PKAccountEnhancedMerchant * _merchant;
    unsigned long long  _state;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly) PKAccountEnhancedMerchant *merchant;
@property (nonatomic, readonly) unsigned long long state;

- (void).cxx_destruct;
- (void)_callCompletionHandlers;
- (void)_updateState:(unsigned long long)arg1 error:(id)arg2;
- (void)addCompletionHandler:(id /* block */)arg1;
- (void)cancel;
- (void)didCompleteSuccessfully;
- (void)didFailWithError:(id)arg1;
- (void)didStart;
- (id)error;
- (id)initWithMerchant:(id)arg1;
- (bool)isInProgress;
- (bool)isInTerminalState;
- (id)merchant;
- (void)setError:(id)arg1;
- (unsigned long long)state;

@end
