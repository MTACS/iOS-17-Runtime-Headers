
@interface ATStatusMonitor : NSObject {
    NSMapTable * _observerDataClasses;
    NSMutableDictionary * _statusDictionary;
    NSHashTable * _statusObservers;
    NSObject<OS_dispatch_queue> * _statusQueue;
    NSMutableSet * _statuses;
}

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)allStatus;
- (id)init;
- (void)removeObserver:(id)arg1;
- (void)setDataClasses:(id)arg1 forObserver:(id)arg2;
- (void)updateAssets:(id)arg1;
- (void)updateStatus:(id)arg1;
- (void)updateStatusValuesWithDictionary:(id)arg1;
- (void)updateStatusWithValue:(id)arg1 forKey:(id)arg2;

@end
