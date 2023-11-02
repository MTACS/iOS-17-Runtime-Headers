
@interface SBTransientUIInteractionManager : NSObject <SBSystemGestureRecognizerDelegate> {
    SBFailingSystemGestureRecognizer * _dismissGestureRecognizer;
    UIPanGestureRecognizer * _indirectPanRecognizer;
    NSHashTable * _indirectPanToParticipants;
    SBSystemGestureManager * _systemGestureManager;
    NSHashTable * _tapToDismissParticipants;
    NSHashTable * _tapToUnhideParticipants;
    UITapGestureRecognizer * _unhideDoubleTapRecognizer;
    UITapGestureRecognizer * _unhideTapRecognizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SBFailingSystemGestureRecognizer *dismissGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIPanGestureRecognizer *indirectPanRecognizer;
@property (nonatomic, retain) NSHashTable *indirectPanToParticipants;
@property (readonly) Class superclass;
@property (nonatomic) SBSystemGestureManager *systemGestureManager;
@property (nonatomic, retain) NSHashTable *tapToDismissParticipants;
@property (nonatomic, retain) NSHashTable *tapToUnhideParticipants;
@property (nonatomic, retain) UITapGestureRecognizer *unhideDoubleTapRecognizer;
@property (nonatomic, retain) UITapGestureRecognizer *unhideTapRecognizer;
@property (nonatomic, readonly) UIWindow *window;

- (void).cxx_destruct;
- (void)_screenWasIndirectPannedToDismiss:(id)arg1;
- (void)_screenWasTappedToUnhide:(id)arg1;
- (id)dismissGestureRecognizer;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)indirectPanRecognizer;
- (id)indirectPanToParticipants;
- (id)initWithSystemGestureManager:(id)arg1;
- (void)registerParticipantForIndirectPanToDismiss:(id)arg1;
- (void)registerParticipantForTapToDismiss:(id)arg1;
- (void)registerParticipantForTapToUnhide:(id)arg1;
- (void)setDismissGestureRecognizer:(id)arg1;
- (void)setIndirectPanRecognizer:(id)arg1;
- (void)setIndirectPanToParticipants:(id)arg1;
- (void)setSystemGestureManager:(id)arg1;
- (void)setTapToDismissParticipants:(id)arg1;
- (void)setTapToUnhideParticipants:(id)arg1;
- (void)setUnhideDoubleTapRecognizer:(id)arg1;
- (void)setUnhideTapRecognizer:(id)arg1;
- (id)systemGestureManager;
- (id)tapToDismissParticipants;
- (id)tapToUnhideParticipants;
- (id)unhideDoubleTapRecognizer;
- (id)unhideTapRecognizer;
- (void)unregisterParticipantForIndirectPanToDismiss:(id)arg1;
- (void)unregisterParticipantForTapToDismiss:(id)arg1;
- (void)unregisterParticipantForTapToUnhide:(id)arg1;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (id)window;

@end
