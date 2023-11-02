
@interface HFCameraVideoDownloader : NSObject <HFCameraVideoDownloader> {
    HMCameraProfile * _cameraProfile;
}

@property (nonatomic) HMCameraProfile *cameraProfile;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_downloadOperationForClip:(id)arg1;
- (id)_fetchOperationForClip:(id)arg1 withClipManager:(id)arg2;
- (id)cameraProfile;
- (id)downloadOperationForClip:(id)arg1;
- (id)initWithCameraProfile:(id)arg1;
- (id)priorityDownloadOperationForClip:(id)arg1;
- (void)setCameraProfile:(id)arg1;

@end
