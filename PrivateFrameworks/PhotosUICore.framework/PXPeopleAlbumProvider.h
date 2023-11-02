
@interface PXPeopleAlbumProvider : NSObject <PXPeopleSectionedDataSourceChangeObserver, PXPhotoLibraryUIChangeObserver> {
    NSObject<OS_dispatch_queue> * _backgroundQueue;
    NSObject<OS_dispatch_queue> * _cacheIsolationQueue;
    long long  _cachedPeopleCount;
    _Atomic int  _currentRequestId;
    bool  _didInitiatePeopleCountFetchRequest;
    bool  _didInitiateReCacheRequest;
    bool  _didPrepareDataSource;
    NSMutableDictionary * _imageCache;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    PXLibraryFilterState * _libraryFilterState;
    PXPeopleSectionedDataSource * _peopleDataSource;
    PHPhotoLibrary * _photoLibrary;
    PXPeopleProgressManager * _progressMgr;
    id /* block */  _requestCompletion;
}

@property (nonatomic) long long cachedPeopleCount;
@property _Atomic int currentRequestId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSMutableDictionary *imageCache;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, readonly) bool isCountAvailable;
@property (nonatomic, readonly) PXLibraryFilterState *libraryFilterState;
@property (nonatomic, readonly) long long peopleCount;
@property (nonatomic, readonly) PXPeopleSectionedDataSource *peopleDataSource;
@property (nonatomic, retain) PXPeopleProgressManager *progressMgr;
@property (nonatomic, copy) id /* block */ requestCompletion;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_appWillEnterForeground;
- (void)_asyncAddImagesToCacheWithPersons:(id)arg1 displayScale:(double)arg2 completion:(id /* block */)arg3;
- (void)_handleRequestResult:(void *)arg1 forRequestID:(void *)arg2 person:(void *)arg3 atIndex:(void *)arg4 error:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 7: id, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, int, id, long long, id, id /* block */
- (void)_invalidateCache;
- (void)_prepareIfNeeded;
- (void)_reCacheImagesWithDisplayScale:(double)arg1 completion:(id /* block */)arg2;
- (bool)_shouldShowInterstitialProgress;
- (void)_updateCachedCountIfNeeded;
- (id)_visiblePersons;
- (long long)cachedPeopleCount;
- (int)currentRequestId;
- (void)dealloc;
- (id)imageCache;
- (void)imageCacheDidChanged:(id)arg1;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)init;
- (bool)isCountAvailable;
- (id)libraryFilterState;
- (long long)peopleCount;
- (id)peopleDataSource;
- (void)peopleSectionedDataSource:(id)arg1 didApplyIncrementalChanges:(id)arg2;
- (void)peopleSectionedDataSourceMembersChangedNonIncrementally:(id)arg1;
- (id)peopleViewController;
- (id)progressMgr;
- (void)requestAlbumImagesWithSize:(struct CGSize { double x1; double x2; })arg1 displayScale:(double)arg2 completion:(id /* block */)arg3;
- (id /* block */)requestCompletion;
- (void)setCachedPeopleCount:(long long)arg1;
- (void)setCurrentRequestId:(int)arg1;
- (void)setImageCache:(id)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setProgressMgr:(id)arg1;
- (void)setRequestCompletion:(id /* block */)arg1;

@end
