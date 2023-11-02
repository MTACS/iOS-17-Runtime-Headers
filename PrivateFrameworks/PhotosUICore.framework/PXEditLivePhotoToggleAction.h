
@interface PXEditLivePhotoToggleAction : PXEditCompositionAction {
    <PXEditLivePhotoModel> * _livePhotoModel;
    NUComposition * _sourceComposition;
    NUComposition * _targetComposition;
}

- (void).cxx_destruct;
- (bool)_isLoopingVideo;
- (id)initWithCompositionController:(id)arg1 livePhotoModel:(id)arg2;
- (void)performAction:(id /* block */)arg1;
- (void)performRedo:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;
- (id)sourceComposition;
- (id)targetComposition;

@end
