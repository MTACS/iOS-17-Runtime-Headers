
@interface PUStorageTipCollectionViewDataSectionManager : PXDataSectionManager <PXPhotoLibraryUIChangeObserver> {
    NSMutableDictionary * _fetchResults;
    PUStorageTipCollectionViewDataSection * _pendingDataSection;
    PHPhotoLibrary * _photoLibrary;
    NSObject<OS_dispatch_queue> * _tipQueue;
}

@property (nonatomic, readonly) PUStorageTipCollectionViewDataSection *dataSection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableDictionary *fetchResults;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PUStorageTipCollectionViewDataSection *pendingDataSection;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *tipQueue;

- (void).cxx_destruct;
- (id)createDataSection;
- (id)fetchResults;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)pendingDataSection;
- (id)photoLibrary;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)setPendingDataSection:(id)arg1;
- (id)tipQueue;
- (void)tipQueue_createPendingDataSection;
- (id)tipQueue_fetchCountsDictionary;
- (id)tipQueue_fetchSizesDictionary;
- (void)tipQueue_populateInitialFetches;

@end
