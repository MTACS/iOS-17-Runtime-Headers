
@interface PLFakeCPLPullChangeSession : NSObject {
    PLFakeCPLLibraryManager * _libraryManager;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)forwardingTargetForSelector:(SEL)arg1;

- (void).cxx_destruct;
- (void)acknowledgeChangeBatch:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)finalizeWithCompletionHandler:(id /* block */)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)getChangeBatchWithCompletionHandler:(id /* block */)arg1;
- (id)initWithLibraryManager:(id)arg1 queue:(id)arg2;

@end
