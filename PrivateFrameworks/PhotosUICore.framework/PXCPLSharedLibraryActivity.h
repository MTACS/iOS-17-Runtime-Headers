
@interface PXCPLSharedLibraryActivity : PXObservable <PHPhotoLibraryChangeObserver> {
    PHFetchResult * _libraryScopeFetchResult;
    unsigned long long  _movingToPersonal;
    unsigned long long  _movingToShared;
    PHPhotoLibrary * _photoLibrary;
    NSObject<OS_dispatch_queue> * _serialQueue;
    long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long movingToPersonal;
@property (nonatomic, readonly) unsigned long long movingToShared;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_fetchLibraryScopeForPhotoLibrary:(id)arg1;
- (void)_queue_handleCloudStatusCounts:(id)arg1 error:(id)arg2 libraryScope:(id)arg3;
- (void)_queue_updateScopeStatusCounts;
- (void)_setMovingToShared:(unsigned long long)arg1 movingToPersonal:(unsigned long long)arg2;
- (void)_setState:(long long)arg1;
- (void)_updateScopeStatusCounts;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1;
- (unsigned long long)movingToPersonal;
- (unsigned long long)movingToShared;
- (id)photoLibrary;
- (void)photoLibraryDidChange:(id)arg1;
- (void)setMovingToPersonal:(unsigned long long)arg1;
- (void)setMovingToShared:(unsigned long long)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end
