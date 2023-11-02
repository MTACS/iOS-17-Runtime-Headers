
@interface PLLibraryServicesOperation : NSBlockOperation {
    id /* block */  _cancellationBlock;
    bool  _cancellationBlockCalled;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cancellationLock;
    NSString * _logPrefix;
    NSProgress * _progress;
    long long  _progressPercentOfTotal;
    long long  _requiredState;
}

@property (nonatomic, copy) id /* block */ cancellationBlock;
@property (copy) NSString *logPrefix;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic) long long progressPercentOfTotal;
@property (nonatomic) long long requiredState;

+ (id)operationWithName:(id)arg1 requiredState:(long long)arg2 parentProgress:(id)arg3 execution:(id /* block */)arg4;
+ (void)setShouldSuppressLogging:(bool)arg1;
+ (bool)shouldSuppressLogging;

- (void).cxx_destruct;
- (void)_runOperationBlock:(id /* block */)arg1;
- (void)_safeRemoveCancellationObserver;
- (id /* block */)cancellationBlock;
- (void)dealloc;
- (id)debugDescription;
- (id)init;
- (id)logPrefix;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)progress;
- (long long)progressPercentOfTotal;
- (long long)requiredState;
- (void)setCancellationBlock:(id /* block */)arg1;
- (void)setExecutionBlockFromOperationBlock:(id /* block */)arg1;
- (void)setLogPrefix:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setProgressPercentOfTotal:(long long)arg1;
- (void)setRequiredState:(long long)arg1;

@end
