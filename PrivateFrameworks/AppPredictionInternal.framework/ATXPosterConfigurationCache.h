
@interface ATXPosterConfigurationCache : NSObject {
    ATXGenericFileBasedCache * _fileCache;
    _PASLock * _lock;
    NSObject<OS_dispatch_queue> * _outputQueue;
}

@property (nonatomic, readonly, copy) NSArray *configurations;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_fetchConfigurationsReadingFromCacheIfNecessaryWithGuardedData:(id)arg1;
- (void)_updateLastActiveDatesWithConfigurations:(id)arg1;
- (id)configurations;
- (id)init;
- (id)initWithPath:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)updateConfigurations:(id)arg1 completion:(id /* block */)arg2;

@end
