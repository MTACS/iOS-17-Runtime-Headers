
@interface NTKPhotosFaceView : NTKBasePhotosFaceView <NTKPhotosReaderDelegate> {
    UILabel * _aplLabel;
    unsigned long long  _currentAnalysisOperationID;
    unsigned long long  _currentContent;
    unsigned long long  _deviceSizeClass;
    id /* block */  _enqueuePreloadedPhotoCompletion;
    _NTKPhotoIndexGenerator * _generator;
    unsigned int  _inPhotoTransition;
    unsigned int  _isAnalysisOperationInProgress;
    unsigned int  _isContentLoaded;
    unsigned int  _isTimetravelScrubbing;
    unsigned long long  _numberOfPhotos;
    UIView * _photoTransitionCornerView;
    UIView * _photoTransitionSnapshotView;
    unsigned long long  _preloadGeneration;
    NSMutableArray * _preloaded;
    NTKCachedPhoto * _presentedPhoto;
    unsigned long long  _queuedTransitionCount;
    NTKPhotosReader * _reader;
    UITapGestureRecognizer * _singleTapGesture;
    NSMutableArray * _toload;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NTKCachedPhoto *presentedPhoto;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_analysisCacheKeyFor:(id)arg1;
- (id)_analysisForAlignment:(unsigned long long)arg1;
- (void)_animationFinished:(bool)arg1;
- (void)_animationStart;
- (void)_applyFrozen;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (double)_backgroundImageAlphaForEditMode:(long long)arg1;
- (id)_cachedAnalysisForKey:(id)arg1;
- (bool)_canOperationProceed:(unsigned long long)arg1;
- (void)_cleanupAfterEditing;
- (void)_clearPreloaded;
- (void)_configureForEditMode:(long long)arg1;
- (id)_createAndCachePhotoAnalysisForKey:(id)arg1 dateAlignment:(unsigned long long)arg2 image:(id)arg3;
- (id)_dequeueToLoadIfMatchingGeneration:(unsigned long long)arg1;
- (void)_didStartPlayingIrisOnSingleTap;
- (void)_displayCachedPhoto:(id)arg1 animated:(bool)arg2 preroll:(bool)arg3 completion:(id /* block */)arg4;
- (void)_endScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (bool)_enqueuePreloadedPhoto:(id)arg1 ifMatchingGeneration:(unsigned long long)arg2;
- (void)_finalizeForSnapshotting:(id /* block */)arg1;
- (void)_handleSingleTap:(id)arg1;
- (void)_loadSnapshotContentViews;
- (void)_nextPhotoAnimated:(bool)arg1 preroll:(bool)arg2 method:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)_nextPhotoReadyAnimated:(bool)arg1 preroll:(bool)arg2 completion:(id /* block */)arg3;
- (void)_operationIsDone;
- (bool)_preloadNextPhoto;
- (void)_resetTapAnimationState;
- (bool)_shouldAnimationContinue:(bool)arg1;
- (void)_startBackgroundRefill;
- (void)_startScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (double)_timeLabelAlphaForEditMode:(long long)arg1;
- (void)_unloadSnapshotContentViews;
- (void)_updateContents:(bool)arg1;
- (void)_updateDateAttributesAnimated:(bool)arg1;
- (void)_updateDateAttributesAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)_updateForResourceDirectoryChange:(id)arg1;
- (void)_updateImageToBlur;
- (void)_updateReader:(bool)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
- (void)layoutSubviews;
- (Class)photosFaceClass;
- (id)presentedPhoto;
- (void)readerDidChange:(id)arg1;
- (void)setPresentedPhoto:(id)arg1;

@end
