
@interface PGControlsViewModel : NSObject <PGPlaybackStateDiffConsumer> {
    <PGControlsViewModelDelegate> * _delegate;
    bool  _hasBegun;
    bool  _inActivitySession;
    bool  _interrupted;
    double  _lastKnownElapsedTime;
    PGPlaybackState * _playbackState;
    PGControlsViewModelValues * _values;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PGControlsViewModelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInActivitySession, nonatomic) bool inActivitySession;
@property (getter=isInterrupted, nonatomic) bool interrupted;
@property (nonatomic, readonly) bool isPrerollSkippable;
@property (nonatomic, readonly, copy) PGPlaybackState *playbackState;
@property (nonatomic, readonly) double preferredMinimumWidth;
@property (nonatomic, readonly) long long secondsUntilPrerollSkippable;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) PGControlsViewModelValues *values;

- (void).cxx_destruct;
- (void)_updateViewModelValues;
- (id)delegate;
- (void)handleActionButtonTapped;
- (void)handleCancelButtonTapped;
- (void)handleDoubleDoubleTap;
- (void)handleDoubleTap;
- (void)handleRestoreButtonTapped;
- (void)handleSingleTap;
- (void)handleSkipBackButtonTapped;
- (void)handleSkipForwardButtonTapped;
- (void)handleSkipPrerollButtonTapped;
- (id)init;
- (bool)isInActivitySession;
- (bool)isInterrupted;
- (bool)isPrerollSkippable;
- (id)playbackState;
- (double)preferredMinimumWidth;
- (unsigned long long)recommendedUpdateCadenceForProgressBarWithWidthInPixels:(double)arg1;
- (long long)secondsUntilPrerollSkippable;
- (void)setDelegate:(id)arg1;
- (void)setInActivitySession:(bool)arg1;
- (void)setInterrupted:(bool)arg1;
- (void)updatePlaybackStateWithDiff:(id)arg1;
- (id)values;

@end
