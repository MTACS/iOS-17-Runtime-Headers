
@interface PXFetchResultCountObserver : NSObject <PHPhotoLibraryChangeObserver> {
    <PXFetchResultCountObserverDelegate> * _delegate;
    PHFetchResult * _fetchResult;
    long long  _fetchResultCount;
    PHPhotoLibrary * _photoLibrary;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXFetchResultCountObserverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PHFetchResult *fetchResult;
@property (nonatomic) long long fetchResultCount;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PHPhotoLibrary *photoLibrary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_serialQueue_acquireFetchResultFromBlock:(id /* block */)arg1;
- (id)delegate;
- (id)fetchResult;
- (long long)fetchResultCount;
- (id)init;
- (id)initWithQOSClass:(unsigned int)arg1 photoLibrary:(id)arg2 fetchResultBlock:(id /* block */)arg3;
- (id)photoLibrary;
- (void)photoLibraryDidChange:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFetchResult:(id)arg1;
- (void)setFetchResultCount:(long long)arg1;
- (void)setPhotoLibrary:(id)arg1;

@end
