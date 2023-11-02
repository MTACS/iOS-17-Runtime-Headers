
@interface NMSKeepLocalRequestLocal : NMSKeepLocalRequest

+ (id)sharedKeepLocalOperationQueue;

- (void)_performRequestWithConstraints:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(id /* block */)arg3;
- (void)performWithOptions:(id)arg1 completion:(id /* block */)arg2;

@end
