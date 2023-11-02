
@interface ATXScoreInterpreterCache : NSObject <ATXMemoryPressureObserver> {
    NSMutableDictionary * _cachedInterpreters;
    bool  _memoryPressureAllowsCaching;
    ATXMemoryPressureMonitor * _memoryPressureMonitor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_assetNamesToSkipCaching;
- (void)dealloc;
- (void)handleMemoryPressureOfType:(unsigned long long)arg1;
- (id)init;
- (void)resetCache;
- (id)scoreInterpreterForConsumerSubType:(unsigned char)arg1;

@end
