
@interface _ATXAppLaunchCategoricalHistogramWithPersistentBackup : _ATXAppLaunchCategoricalHistogram <NSSecureCoding> {
    _ATXDataStore * _datastore;
    long long  _histogramType;
    ATXBackgroundSaver * _saver;
}

@property (nonatomic, readonly) _ATXDataStore *datastore;
@property (nonatomic, readonly) long long histogramType;

- (void).cxx_destruct;
- (void)addLaunchWithBundleId:(id)arg1 date:(id)arg2 category:(id)arg3;
- (void)addLaunchWithBundleId:(id)arg1 date:(id)arg2 category:(id)arg3 weight:(float)arg4;
- (id)datastore;
- (void)flush;
- (long long)histogramType;
- (id)initWithDataStore:(id)arg1 histogramType:(long long)arg2;
- (id)initWithDataStore:(id)arg1 histogramType:(long long)arg2 saveOnBackgroundQueue:(id)arg3 maxCategoryCount:(unsigned short)arg4 pruningMethod:(long long)arg5;
- (bool)removeHistoryForBundleId:(id)arg1;
- (int)removeHistoryForBundleIds:(id)arg1;
- (bool)removeHistoryForCategory:(id)arg1;
- (void)resetData;
- (void)resetHistogram:(id)arg1;

@end
