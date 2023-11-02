
@interface NTKLibrarySelectedFaceSnapshotProvider : NSObject <NTKFaceCollectionObserver, NTKFaceObserver> {
    <NTKLibrarySelectedFaceSnapshotProviderDelegate> * _delegate;
    NTKFaceCollection * _libraryCollection;
    bool  _resumedQueue;
    NTKFace * _selectedFace;
    NSString * _snapshotKey;
    NSObject<OS_dispatch_queue> * _snapshotRequestsQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKLibrarySelectedFaceSnapshotProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImage *snapshotImage;
@property (readonly) Class superclass;

+ (void)snapshotCurrentFaceForActiveDeviceWithOptions:(id)arg1 completion:(id /* block */)arg2;
+ (void)snapshotCurrentFaceForDevice:(id)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;
+ (void)snapshotCurrentFaceForDeviceUUID:(id)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_handleFaceChange:(id)arg1;
- (void)_handleSnapshotChangedNotification:(id)arg1;
- (void)_notifyIfSnapshotAvailable;
- (void)_updateSelectedFaceAndSnapshotKey;
- (void)dealloc;
- (id)delegate;
- (void)faceCollection:(id)arg1 didSelectFace:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)faceCollectionDidLoad:(id)arg1;
- (void)faceConfigurationDidChange:(id)arg1;
- (void)faceResourceDirectoryDidChange:(id)arg1;
- (id)initWithDeviceUUID:(id)arg1;
- (id)initWithDeviceUUID:(id)arg1 delegate:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)snapshotImage;
- (void)snapshotSelectedFaceWithOptions:(id)arg1 completion:(id /* block */)arg2;

@end
