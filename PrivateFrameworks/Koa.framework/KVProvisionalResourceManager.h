
@interface KVProvisionalResourceManager : NSObject {
    id /* block */  _activationBlock;
    NSObject<OS_dispatch_queue> * _activationQueue;
    id /* block */  _deactivationBlock;
    NSDate * _expirationDate;
    double  _expirationInterval;
    NSObject<OS_dispatch_queue> * _expirationQueue;
    bool  _isActive;
    NSObject<OS_dispatch_queue> * _operationQueue;
    long long  _operationsInProgress;
    NSString * _resourceName;
}

@property (retain) NSDate *expirationDate;

- (void).cxx_destruct;
- (void)_setExpirationTimer;
- (void)activateAsyncWithCompletion:(id /* block */)arg1;
- (long long)activateWithError:(id*)arg1 operationBlock:(id /* block */)arg2;
- (long long)deactivateWithError:(id*)arg1;
- (id)expirationDate;
- (id)init;
- (id)initWithResourceName:(id)arg1 lifespan:(double)arg2 activationBlock:(id /* block */)arg3 deactivationBlock:(id /* block */)arg4 serializeOperations:(bool)arg5;
- (bool)isActive;
- (void)setExpirationDate:(id)arg1;

@end
