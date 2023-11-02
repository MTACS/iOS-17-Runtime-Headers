
@interface PXContentSyndicationCountsController : PXObservable <PXContentSyndicationMutableCountsController, PXSettingsKeyObserver> {
    <PXDisplayAssetCollection> * _assetCollection;
    struct { 
        unsigned long long photosCount; 
        unsigned long long videosCount; 
        unsigned long long othersCount; 
    }  _detailedCounts;
    long long  _savedCount;
}

@property (nonatomic, readonly) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } actualDetailedCounts;
@property (nonatomic, readonly) long long actualSavedCount;
@property (nonatomic, copy) <PXDisplayAssetCollection> *assetCollection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } detailedCounts;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long savedCount;
@property (nonatomic, readonly) NSString *savedCountDescription;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *totalCountDescription;

- (void).cxx_destruct;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })actualDetailedCounts;
- (long long)actualSavedCount;
- (id)assetCollection;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })detailedCounts;
- (void)didSetAssetCollection:(id)arg1;
- (id)init;
- (void)performChanges:(id /* block */)arg1;
- (long long)savedCount;
- (id)savedCountDescription;
- (void)setAssetCollection:(id)arg1;
- (void)setDetailedCounts:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (void)setSavedCount:(long long)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)totalCountDescription;

@end
