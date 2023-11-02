
@interface AAProcessorManager : NSObject <AAFlushable> {
    void processorManager;
}

- (void).cxx_destruct;
- (void)addEventProcessor:(id)arg1;
- (void)flushWithCallbackQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)removeEventProcessor:(id)arg1;
- (void)resumeBackgroundProcessingForIdentifier:(id)arg1 completion:(id /* block */)arg2;

@end
