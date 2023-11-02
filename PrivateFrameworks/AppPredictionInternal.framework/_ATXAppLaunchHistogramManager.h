
@interface _ATXAppLaunchHistogramManager : NSObject {
    long long  _SSIDPruningMethod;
    long long  _actionConfirmsRejectsPruningMethod;
    long long  _appJointContextPruningMethod;
    NSObject<OS_dispatch_queue> * _backgroundSaverQueue;
    NSMutableDictionary * _categoricalHistograms;
    _ATXDataStore * _datastore;
    NSMutableDictionary * _histograms;
    int  _maxActionConfirmsRejectsActionCount;
    int  _maxAppCoarseLocationMaxKeyCount;
    int  _maxAppJointContextKeyCount;
    int  _maxAppSpecificLocationMaxKeyCount;
    int  _maxAppZoom7GeoHashMaxKeyCount;
    int  _maxSSIDCount;
    NSDictionary * _parameters;
    bool  _persistentStore;
}

@property (nonatomic, readonly) bool persistentStore;

+ (bool)isHistogramDeprecated:(long long)arg1;
+ (void)releaseTemporarySharedInstance;
+ (void)resetDataForCategoricalHistograms;
+ (void)resetSharedInstance;
+ (id)sharedInstance;
+ (void)useTemporarySharedInstance:(id)arg1;

- (void).cxx_destruct;
- (id)_categoricalHistogramForLaunchType:(long long)arg1 maxCategoryCount:(unsigned short)arg2 pruningMethod:(long long)arg3;
- (id)categoricalHistogramForLaunchType:(long long)arg1;
- (void)enumerateInMemoryCategoricalHistogramsWithBlock:(id /* block */)arg1;
- (void)enumerateInMemoryHistogramsWithBlock:(id /* block */)arg1;
- (void)exchangeDatastore:(id)arg1;
- (int)getHistogramMaxCategoryCountFromAsset:(id)arg1;
- (unsigned long long)getHistogramPruningMethodFromAsset:(id)arg1;
- (id)histogramForLaunchType:(long long)arg1;
- (id)init;
- (id)initAndPersist:(bool)arg1;
- (id)initWithInMemoryStore;
- (id)initWithPersistentStore;
- (bool)persistentStore;
- (void)purgeHistogramForLaunchType:(long long)arg1;

@end
