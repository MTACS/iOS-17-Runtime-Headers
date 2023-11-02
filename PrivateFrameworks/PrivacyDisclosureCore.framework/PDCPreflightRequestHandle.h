
@interface PDCPreflightRequestHandle : NSObject <PDCPreflightRequestCanceling> {
    id /* block */  _completionHandler;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _isComplete;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)alreadyCompletedRequestHandle;

- (void).cxx_destruct;
- (void)cancel;
- (void)completeRequestWithResponse:(unsigned long long)arg1;
- (id)initWithQueue:(id)arg1 completionHandler:(id /* block */)arg2;

@end
