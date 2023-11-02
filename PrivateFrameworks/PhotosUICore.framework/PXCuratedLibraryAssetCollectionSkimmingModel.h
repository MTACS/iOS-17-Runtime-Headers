
@interface PXCuratedLibraryAssetCollectionSkimmingModel : NSObject {
    PXAssetCollectionReference * _containingAssetCollectionReference;
    id  _dataSourcePauseToken;
    PXIndexPathSet * _indexPathSetForSkimming;
    struct PXSimpleIndexPath { 
        long long dataSourceIdentifier; 
        long long section; 
        long long item; 
        long long subitem; 
    }  _initialIndexPath;
    bool  _isInteractionInProgress;
    bool  _isPlayingSlideshow;
    struct PXSimpleIndexPath { 
        long long dataSourceIdentifier; 
        long long section; 
        long long item; 
        long long subitem; 
    }  _skimmedIndexPath;
    long long  _skimmingZoomLevel;
    PXCuratedLibraryViewModel * _viewModel;
    long long  _zoomLevel;
}

@property (nonatomic, readonly) bool canStartSkimming;
@property (nonatomic, readonly) PXAssetCollectionReference *containingAssetCollectionReference;
@property (nonatomic, readonly, copy) PXIndexPathSet *indexPathSetForSkimming;
@property (nonatomic, readonly) struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; } initialIndexPath;
@property (nonatomic, readonly) bool isInteractionInProgress;
@property (nonatomic, readonly) bool isPlayingSlideshow;
@property (nonatomic) struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; } skimmedIndexPath;
@property (nonatomic, readonly) PXCuratedLibraryViewModel *viewModel;

- (void).cxx_destruct;
- (void)_prepareIndexesForAssetCollectionReference:(id)arg1 willStartSkimming:(bool)arg2 willStartSlideshow:(bool)arg3;
- (void)_updateViewModel;
- (bool)canStartSkimming;
- (id)containingAssetCollectionReference;
- (id)indexPathSetForSkimming;
- (id)initWithViewModel:(id)arg1;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })initialIndexPath;
- (bool)isInteractionInProgress;
- (bool)isPlayingSlideshow;
- (void)persistSkimmingState;
- (void)prepareForShowingHintsForAssetCollectionReference:(id)arg1;
- (void)prepareForSkimmingInAssetCollectionReference:(id)arg1;
- (void)prepareForSlideshowForAssetCollectionReference:(id)arg1;
- (void)setSkimmedIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })skimmedIndexPath;
- (void)tearDownAfterSkimmingShowHints:(bool)arg1 persistState:(bool)arg2;
- (void)transitionToSkimming;
- (void)transitionToSlideshow;
- (id)validatedAssetCollectionReference:(id)arg1;
- (id)viewModel;

@end
