
@interface PXCuratedLibrarySkimmingController : NSObject <PXChangeObserver> {
    long long  _currentSkimmingIndex;
    <PXCuratedLibrarySkimmingControllerDelegate> * _delegate;
    double  _lastPanningTranslation;
    PXAssetCollectionReference * _preSkimmedAssetCollectionReference;
    long long  _skimmingDataSourceIdentifier;
    UISelectionFeedbackGenerator * _skimmingFeedbackGenerator;
    NSArray * _skimmingIndexes;
    PXCuratedLibraryAssetCollectionSkimmingModel * _skimmingModel;
    bool  _skimmingSlideshowEnabled;
    double  _slideshowIntervalDelay;
    NSTimer * _slideshowTimer;
    double  _slideshowTriggerDelay;
    long long  _state;
}

@property (nonatomic, readonly) bool canStartSkimming;
@property (nonatomic) long long currentSkimmingIndex;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXCuratedLibrarySkimmingControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isTouching;
@property (nonatomic) double lastPanningTranslation;
@property (nonatomic, retain) PXAssetCollectionReference *preSkimmedAssetCollectionReference;
@property (nonatomic) long long skimmingDataSourceIdentifier;
@property (nonatomic, retain) NSArray *skimmingIndexes;
@property (nonatomic, readonly) PXCuratedLibraryAssetCollectionSkimmingModel *skimmingModel;
@property (nonatomic) bool skimmingSlideshowEnabled;
@property (nonatomic, retain) NSTimer *slideshowTimer;
@property (nonatomic) long long state;
@property (readonly) Class superclass;

+ (id)new;

- (void).cxx_destruct;
- (void)_adoptIndexesFromSkimmingModel;
- (void)_cancelEnteringTouchingState;
- (void)_cleanupFeedbackGenerator;
- (void)_ensureFeedbackGenerator;
- (void)_enterIdleStatePersistSkimmingState:(bool)arg1;
- (void)_enterSlideshowStateForAssetCollectionReference:(id)arg1;
- (void)_enterTouchingStateForAssetCollectionReference:(id)arg1;
- (void)_generateFeedbackForSkimmingGesture;
- (void)_slideshowTimerTick:(id)arg1;
- (void)_startOrResumeSlideshowTouchesEnded:(bool)arg1;
- (void)_stopSlideshow;
- (void)_updateSlideshow;
- (bool)canStartSkimming;
- (void)contentViewDidScroll;
- (void)contentViewWillScroll;
- (long long)currentSkimmingIndex;
- (id)delegate;
- (void)endPanning;
- (bool)endTouchingGestureEnded:(bool)arg1;
- (id)init;
- (id)initWithSkimmingModel:(id)arg1;
- (bool)isTouching;
- (double)lastPanningTranslation;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)preSkimmedAssetCollectionReference;
- (void)setCurrentSkimmingIndex:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastPanningTranslation:(double)arg1;
- (void)setPreSkimmedAssetCollectionReference:(id)arg1;
- (void)setSkimmingDataSourceIdentifier:(long long)arg1;
- (void)setSkimmingIndexes:(id)arg1;
- (void)setSkimmingSlideshowEnabled:(bool)arg1;
- (void)setSlideshowTimer:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)skimmingDataSourceIdentifier;
- (id)skimmingIndexes;
- (id)skimmingModel;
- (bool)skimmingSlideshowEnabled;
- (id)slideshowTimer;
- (void)startPanningForAssetCollectionReference:(id)arg1;
- (void)startTouchingForAssetCollectionReference:(id)arg1;
- (long long)state;
- (void)updatePanningWithTranslation:(struct CGPoint { double x1; double x2; })arg1;

@end
