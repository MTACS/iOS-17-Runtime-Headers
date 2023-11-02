
@protocol FCCoreConfigurationManager <NSObject>

@required

- (void)addObserver:(id <FCCoreConfigurationObserving>)arg1;
- (<FCCoreConfiguration> *)configuration;
- (void)fetchConfigurationIfNeededWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <FCCoreConfiguration> *, NSError *, void*
- (void)fetchConfigurationIfNeededWithCompletionQueue:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <FCCoreConfiguration> *, NSError *, void*
- (void)removeObserver:(id <FCCoreConfigurationObserving>)arg1;

@end
