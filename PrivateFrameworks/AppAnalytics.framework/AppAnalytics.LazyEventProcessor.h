
@interface AppAnalytics.LazyEventProcessor : _TtCs12_SwiftObject <AAFlushable> {
    void loadedLazyProcessors;
    void lock;
    void processorProvider;
}

- (void)flushWithCallbackQueue:(id)arg1 completion:(id /* block */)arg2;

@end
