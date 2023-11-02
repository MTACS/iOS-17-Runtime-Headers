
@interface HMDPhotoLibrary : HMFObject <HMFLogging, PHPhotoLibraryChangeObserver> {
    <HMDPhotoLibraryDelegate> * _delegate;
    PHPhotoLibrary * _photoLibrary;
    PHFetchResult * _suggestedPersonsFetchResult;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property <HMDPhotoLibraryDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSSet *persons;
@property (readonly) PHPhotoLibrary *photoLibrary;
@property (retain) PHFetchResult *suggestedPersonsFetchResult;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)_phPersonWithUUID:(id)arg1 fromSuggestedPersonsFetchResult:(id)arg2;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)delegate;
- (id)faceCropFromFaceCropData:(id)arg1;
- (id)fetchFaceCropDataByUUIDForPersonUUID:(id)arg1;
- (void)fetchPersons;
- (id)initWithWorkQueue:(id)arg1;
- (unsigned long long)numberOfFaceCropsForPersonWithUUID:(id)arg1;
- (id)persons;
- (id)photoLibrary;
- (void)photoLibraryDidChange:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSuggestedPersonsFetchResult:(id)arg1;
- (id)suggestedPersonsFetchResult;
- (id)workQueue;

@end
