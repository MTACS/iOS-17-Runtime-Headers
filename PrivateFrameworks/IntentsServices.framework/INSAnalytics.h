
@interface INSAnalytics : NSObject {
    <INSAnalyticsDataSource> * _dataSource;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSHashTable * _observers;
}

@property (nonatomic) <INSAnalyticsDataSource> *dataSource;
@property (nonatomic, retain) NSHashTable *observers;

+ (id)sharedAnalytics;

- (void).cxx_destruct;
- (id)_init;
- (void)addObserver:(id)arg1;
- (id)contextDictionaryForCommand:(id)arg1;
- (id)contextDictionaryForError:(id)arg1;
- (id)dataSource;
- (void)logEventWithType:(long long)arg1 context:(id)arg2 contextNoCopy:(bool)arg3;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setObservers:(id)arg1;

@end
