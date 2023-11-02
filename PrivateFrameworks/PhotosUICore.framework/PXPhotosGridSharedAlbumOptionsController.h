
@interface PXPhotosGridSharedAlbumOptionsController : NSObject <PLInvitationRecordsObserver, PXPhotosGridOptionsController> {
    NSString * _actionPerformerType;
    PHAssetCollection * _assetCollection;
    bool  _hasRegistered;
    <PXPhotosGridOptionsControllerDelegate> * _optionsDelegate;
    NSString * _systemIconImageName;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, copy) NSString *actionPerformerType;
@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PXPhotosGridOptionsControllerDelegate> *optionsDelegate;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *systemIconImageName;

- (void).cxx_destruct;
- (void)_updateOptions;
- (void)_workQueue_updateOptions;
- (id)actionPerformerType;
- (id)assetCollection;
- (void)dealloc;
- (id)init;
- (id)initWithAssetCollection:(id)arg1;
- (void)invitationRecordsDidChange:(id)arg1;
- (id)optionsDelegate;
- (void)preloadOptions;
- (void)setActionPerformerType:(id)arg1;
- (void)setOptionsDelegate:(id)arg1;
- (void)setSystemIconImageName:(id)arg1;
- (id)systemIconImageName;

@end
