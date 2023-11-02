
@interface HMFOperationFutureAdapter : NSObject {
    HMFFuture * _future;
    HMFPromise * _promise;
}

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
