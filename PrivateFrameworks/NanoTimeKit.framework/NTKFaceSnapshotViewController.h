
@interface NTKFaceSnapshotViewController : UIViewController <NTKFaceObserver> {
    NTKFace * _face;
    UIImageView * _imageView;
    UIImage * _snapshotImage;
    NSString * _snapshotKeyOfSnapshotImage;
    NTKFaceSnapshotCacheRequest * _snapshotRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NTKFace *face;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, retain) UIImage *snapshotImage;
@property (nonatomic, retain) NSString *snapshotKeyOfSnapshotImage;
@property (nonatomic, retain) NTKFaceSnapshotCacheRequest *snapshotRequest;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_attemptToFetchSnapshot;
- (void)_handleSnapshot:(id)arg1 forKey:(id)arg2;
- (void)_updateFaceSnapshotIfNecessaryOfFace;
- (void)complicationTemplatesChanged;
- (void)complicationsChanged;
- (void)dealloc;
- (id)face;
- (void)faceConfigurationDidChange:(id)arg1;
- (void)faceResourceDirectoryDidChange:(id)arg1;
- (id)imageView;
- (id)initWithFace:(id)arg1;
- (void)setSnapshotImage:(id)arg1;
- (void)setSnapshotKeyOfSnapshotImage:(id)arg1;
- (void)setSnapshotRequest:(id)arg1;
- (id)snapshotImage;
- (id)snapshotKeyOfSnapshotImage;
- (id)snapshotRequest;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
