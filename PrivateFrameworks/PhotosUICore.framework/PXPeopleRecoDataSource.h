
@interface PXPeopleRecoDataSource : NSObject <PXPhotoLibraryUIChangeObserver> {
    <PXPeopleRecoDataSourceDelegate> * _dataSourceDelegate;
    PHFetchResult * _faceCrops;
    PHFetchResult * _faces;
    bool  _isUsingMockedData;
    PHPerson * _person;
    NSObject<OS_dispatch_queue> * _processingQueue;
    NSMutableIndexSet * _rejectedFaceCropIndexes;
    NSMutableIndexSet * _rejectedFaceIndexes;
}

@property (nonatomic, readonly) <PXPeopleRecoDataSourceDelegate> *dataSourceDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PHFetchResult *faceCrops;
@property (nonatomic, retain) PHFetchResult *faces;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isUsingMockedData;
@property (nonatomic, retain) PHPerson *person;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *processingQueue;
@property (nonatomic, readonly) NSMutableIndexSet *rejectedFaceCropIndexes;
@property (nonatomic, readonly) NSMutableIndexSet *rejectedFaceIndexes;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_clearIndexes;
- (void)_fetchEverythingForPerson:(id)arg1;
- (void)commitChanges;
- (id)dataSourceDelegate;
- (id)faceCrops;
- (id)faces;
- (bool)hasAnyRejectedItems;
- (id)initWithPerson:(id)arg1 dataSourceDelegate:(id)arg2;
- (bool)isIndexRejected:(unsigned long long)arg1;
- (bool)isUsingMockedData;
- (unsigned long long)numberOfItems;
- (id)person;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (id)processingQueue;
- (id)rejectedFaceCropIndexes;
- (id)rejectedFaceIndexes;
- (void)requestImageForItemAtIndex:(unsigned long long)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 displayScale:(double)arg3 imageBlock:(id /* block */)arg4;
- (void)setFaceCrops:(id)arg1;
- (void)setFaces:(id)arg1;
- (void)setPerson:(id)arg1;
- (void)setProcessingQueue:(id)arg1;
- (bool)shouldAllowCommitting;
- (bool)toggleRejectionForIndex:(unsigned long long)arg1;

@end
