
@interface PUPhotoEditIrisModel : PUViewModel <NSCopying, PXEditLivePhotoModel> {
    <PUEditableAsset> * _asset;
    bool  _assetHasAdjustments;
    unsigned short  _assetVisibility;
    PICompositionController * _compositionController;
    unsigned short  _editingVisibility;
    bool  _ignoresUpdates;
    bool  _videoEnabled;
}

@property (nonatomic, readonly) <PUEditableAsset> *asset;
@property (nonatomic, readonly) bool assetHasAdjustments;
@property (nonatomic, readonly) unsigned short assetVisibility;
@property (nonatomic, retain) PICompositionController *compositionController;
@property (nonatomic, readonly) PUPhotoEditIrisModelChange *currentChange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned short editingVisibility;
@property (nonatomic, readonly) bool hasUnsavedChanges;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoresUpdates;
@property (readonly) Class superclass;
@property (getter=isVideoEnabled, nonatomic) bool videoEnabled;

- (void).cxx_destruct;
- (bool)_hasLegacyIrisConflicts;
- (void)_setHidden:(bool)arg1 explicit:(bool)arg2 supportable:(bool)arg3;
- (void)_updateAutoDisableStateIfNeeded;
- (id)asset;
- (bool)assetHasAdjustments;
- (unsigned short)assetVisibility;
- (id)compositionController;
- (void)compositionDidChange;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentChange;
- (void)dealloc;
- (unsigned short)editingVisibility;
- (bool)hasUnsavedChanges;
- (bool)ignoresUpdates;
- (id)init;
- (id)initWithAsset:(id)arg1 compositionController:(id)arg2;
- (id)initWithIrisVisibilityState:(unsigned short)arg1 hasAdjustments:(bool)arg2 compositionController:(id)arg3;
- (bool)isVideoEnabled;
- (id)newViewModelChange;
- (void)notifyCannotSupportVideoEdits;
- (bool)reenablingLivePhotoShouldRemoveEdits;
- (void)setCompositionController:(id)arg1;
- (void)setEditingVisibility:(unsigned short)arg1;
- (void)setIgnoresUpdates:(bool)arg1;
- (void)setVideoEnabled:(bool)arg1;

@end
