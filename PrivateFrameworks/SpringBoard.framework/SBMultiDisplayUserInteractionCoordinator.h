
@interface SBMultiDisplayUserInteractionCoordinator : NSObject <SBActiveWindowSceneTracking, SBWindowSceneAttachmentObserving, _SBPointerInteractionEventSnifferDelegate, _SBPointerTouchDownEventSnifferDelegate, _SBTouchInteractionEventSnifferDelegate> {
    SBWindowScene * _activeDisplayWindowScene;
    SBWindowScene * _activePointerWindowScene;
    SBWindowScene * _activeTouchDownOriginatedWindowScene;
    NSHashTable * _activeWindowSceneObservers;
    <SBMultiDisplayUserInteractionCoordinatorDelegate> * _delegate;
    NSHashTable * _pointerInteractionObservers;
    NSMapTable * _sceneToEventSniffers;
}

@property (nonatomic, readonly) SBWindowScene *activePointerWindowScene;
@property (nonatomic, readonly) SBWindowScene *activeTouchDownOriginatedWindowScene;
@property (nonatomic, readonly) SBWindowScene *activeWindowScene;
@property (nonatomic, retain) NSHashTable *activeWindowSceneObservers;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBMultiDisplayUserInteractionCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSHashTable *pointerInteractionObservers;
@property (nonatomic, retain) NSMapTable *sceneToEventSniffers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleActiveDisplayQualifyingEventInWindowScene:(id)arg1 source:(id)arg2;
- (id)_windowSceneForEvent:(id)arg1;
- (id)activePointerWindowScene;
- (id)activeTouchDownOriginatedWindowScene;
- (id)activeWindowScene;
- (id)activeWindowSceneObservers;
- (void)addActiveDisplayWindowSceneObserver:(id)arg1;
- (void)addPointerInteractionObserver:(id)arg1;
- (id)delegate;
- (void)eventSnifferHandledPointerInteractionQualifyingEvent:(id)arg1;
- (void)eventSnifferHandledPointerTouchDown:(id)arg1;
- (void)eventSnifferHandledPointerTouchUp:(id)arg1;
- (void)eventSnifferHandledTouchInteractionQualifyingEvent:(id)arg1;
- (void)handleSendEvent:(id)arg1;
- (id)init;
- (id)pointerInteractionObservers;
- (void)removeActiveDisplayWindowSceneObserver:(id)arg1;
- (void)removePointerInteractionObserver:(id)arg1;
- (id)sceneToEventSniffers;
- (void)setActiveWindowSceneObservers:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPointerInteractionObservers:(id)arg1;
- (void)setSceneToEventSniffers:(id)arg1;
- (void)windowSceneDidConnect:(id)arg1;
- (void)windowSceneDidDisconnect:(id)arg1;

@end
