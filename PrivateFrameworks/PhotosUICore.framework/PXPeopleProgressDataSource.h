
@interface PXPeopleProgressDataSource : NSObject <PXPhotoLibraryUIChangeObserver> {
    long long  _allowedAssetCount;
    bool  _countCacheValid;
    PHFetchResult * _homeResult;
    bool  _isReadyForAnalysis;
    long long  _pendingToAnyVersionAssetCount;
    long long  _pendingToLatestVersionAssetCount;
    NSObject<OS_dispatch_queue> * _personPromoterQueue;
    PHPhotoLibrary * _photoLibrary;
    long long  _processedToAnyVersionAssetCount;
    long long  _processedToLatestVersionAssetCount;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _progressLock;
    NSObject<OS_dispatch_queue> * _scanningProgressQueue;
}

@property (nonatomic) long long allowedAssetCount;
@property (nonatomic) bool countCacheValid;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasHomePeople;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PHFetchResult *homeResult;
@property (nonatomic) bool isReadyForAnalysis;
@property (nonatomic) long long pendingToAnyVersionAssetCount;
@property (nonatomic) long long pendingToLatestVersionAssetCount;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *personPromoterQueue;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic) long long processedToAnyVersionAssetCount;
@property (nonatomic) long long processedToLatestVersionAssetCount;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } progressLock;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *scanningProgressQueue;
@property (readonly) Class superclass;

+ (struct { long long x1; long long x2; long long x3; double x4; double x5; })_invalidProgressReport;
+ (long long)pendingCountForAllowedCount:(long long)arg1 processedCount:(long long)arg2;

- (void).cxx_destruct;
- (id)_fetchPeople;
- (void)_logFaceCounts;
- (long long)allowedAssetCount;
- (void)appWillEnterForeground;
- (void)asyncUpdateProgressWithReportBlock:(id /* block */)arg1;
- (bool)countCacheValid;
- (void)dealloc;
- (bool)hasHomePeople;
- (id)homeResult;
- (id)initWithPhotoLibrary:(id)arg1;
- (bool)isPhotoLibraryReadyForAnalysis;
- (bool)isReadyForAnalysis;
- (void)loadQueryData;
- (long long)pendingToAnyVersionAssetCount;
- (long long)pendingToLatestVersionAssetCount;
- (id)personPromoterQueue;
- (id)photoLibrary;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (long long)processedToAnyVersionAssetCount;
- (long long)processedToLatestVersionAssetCount;
- (struct os_unfair_lock_s { unsigned int x1; })progressLock;
- (struct { long long x1; long long x2; long long x3; double x4; double x5; })progressReportForLibrary:(id)arg1;
- (void)requestPersonPromoterStatusWithCompletionBlock:(id /* block */)arg1;
- (id)scanningProgressQueue;
- (void)setAllowedAssetCount:(long long)arg1;
- (void)setCountCacheValid:(bool)arg1;
- (void)setHomeResult:(id)arg1;
- (void)setIsReadyForAnalysis:(bool)arg1;
- (void)setPendingToAnyVersionAssetCount:(long long)arg1;
- (void)setPendingToLatestVersionAssetCount:(long long)arg1;
- (void)setProcessedToAnyVersionAssetCount:(long long)arg1;
- (void)setProcessedToLatestVersionAssetCount:(long long)arg1;
- (void)syncUpdateProgressWithReportBlock:(id /* block */)arg1;
- (void)updateProgressFromIsReadyForAnalysis:(bool)arg1 progressReport:(struct { long long x1; long long x2; long long x3; double x4; double x5; })arg2;
- (void)updateProgressIfNeededWithReportBlock:(id /* block */)arg1;

@end
