
@interface TLAlertSystemSoundContext : NSObject {
    bool  _beingDeemphasized;
    bool  _beingInterrupted;
    bool  _deemphasized;
    bool  _hasDeemphasizedPlaybackStarted;
    bool  _hasPlaybackStarted;
    bool  _loadingSound;
    TLAlertPlaybackCompletionContext * _playbackCompletionContext;
    <TLAlertPlaybackObserver> * _playbackObserver;
    bool  _requiringBacklightObservation;
    bool  _shouldBeInterruptedAfterDeemphasizedPlaybackStarts;
    TLSystemSound * _sound;
    TLAlertStoppingOptions * _stoppingOptionsForDeferredInterruption;
    NSString * _toneIdentifierForDeemphasizingAlert;
}

@property (getter=isBeingDeemphasized, nonatomic) bool beingDeemphasized;
@property (getter=isBeingInterrupted, nonatomic) bool beingInterrupted;
@property (getter=isDeemphasized, nonatomic) bool deemphasized;
@property (nonatomic) bool hasDeemphasizedPlaybackStarted;
@property (nonatomic) bool hasPlaybackStarted;
@property (getter=isLoadingSound, nonatomic) bool loadingSound;
@property (nonatomic, retain) TLAlertPlaybackCompletionContext *playbackCompletionContext;
@property (nonatomic) <TLAlertPlaybackObserver> *playbackObserver;
@property (getter=isRequiringBacklightObservation, nonatomic) bool requiringBacklightObservation;
@property (nonatomic) bool shouldBeInterruptedAfterDeemphasizedPlaybackStarts;
@property (nonatomic, retain) TLSystemSound *sound;
@property (nonatomic, copy) TLAlertStoppingOptions *stoppingOptionsForDeferredInterruption;
@property (nonatomic, copy) NSString *toneIdentifierForDeemphasizingAlert;

- (void).cxx_destruct;
- (id)description;
- (bool)hasDeemphasizedPlaybackStarted;
- (bool)hasPlaybackStarted;
- (bool)isBeingDeemphasized;
- (bool)isBeingInterrupted;
- (bool)isDeemphasized;
- (bool)isLoadingSound;
- (bool)isRequiringBacklightObservation;
- (id)playbackCompletionContext;
- (id)playbackObserver;
- (void)setBeingDeemphasized:(bool)arg1;
- (void)setBeingInterrupted:(bool)arg1;
- (void)setDeemphasized:(bool)arg1;
- (void)setHasDeemphasizedPlaybackStarted:(bool)arg1;
- (void)setHasPlaybackStarted:(bool)arg1;
- (void)setLoadingSound:(bool)arg1;
- (void)setPlaybackCompletionContext:(id)arg1;
- (void)setPlaybackObserver:(id)arg1;
- (void)setRequiringBacklightObservation:(bool)arg1;
- (void)setShouldBeInterruptedAfterDeemphasizedPlaybackStarts:(bool)arg1;
- (void)setSound:(id)arg1;
- (void)setStoppingOptionsForDeferredInterruption:(id)arg1;
- (void)setToneIdentifierForDeemphasizingAlert:(id)arg1;
- (bool)shouldBeInterruptedAfterDeemphasizedPlaybackStarts;
- (id)sound;
- (id)stoppingOptionsForDeferredInterruption;
- (id)toneIdentifierForDeemphasizingAlert;

@end
