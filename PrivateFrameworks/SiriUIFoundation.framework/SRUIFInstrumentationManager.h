
@interface SRUIFInstrumentationManager : NSObject <AFAnalyticsDialogIdentifierAssociationProvider> {
    NSMutableDictionary * _aceViewDialogIdentifiers;
    NSMutableDictionary * _aceViewDialogIdentifiersForMessageConstruction;
    NSMutableDictionary * _cardInfo;
    NSString * _clientGeneratedDialogIdentifier;
    AFAnalyticsTurnBasedInstrumentationContext * _currentInstrumentationTurnContext;
    int  _currentSiriUIState;
    bool  _hasNotYetEmittedLaunchContextEnd;
    NSObject<OS_dispatch_queue> * _instrumentationManagerQueue;
    NSString * _lastDismissedIdentifier;
    bool  _potentialBargeInDetected;
    double  _potentialBargeInDetectedTime;
    AFAnalyticsTurnBasedInstrumentationContext * _potentialBargedInTurn;
    AFAnalyticsTurnBasedInstrumentationContext * _previousInstrumentationTurnContext;
    bool  _shouldInstrument;
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, copy) NSString *clientGeneratedDialogIdentifier;
@property (retain) AFAnalyticsTurnBasedInstrumentationContext *currentInstrumentationTurnContext;
@property int currentSiriUIState;
@property (nonatomic) bool hasNotYetEmittedLaunchContextEnd;
@property (retain) AFAnalyticsTurnBasedInstrumentationContext *previousInstrumentationTurnContext;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_barrierWithCompletion:(id /* block */)arg1;
- (id)_convertVirtualAudioSubTypeToString:(unsigned int)arg1;
- (id)_displayedDialogForAssistantUtteranceView:(id)arg1;
- (void)_emitInstrumentation:(id)arg1 forTurn:(id)arg2 atTime:(unsigned long long)arg3;
- (bool)_hasDismissedForTurnContext:(id)arg1;
- (id)_pnrErrorMessageWithError:(id)arg1;
- (void)_populateDefaultHardwareInformationWithRouteInfo:(id)arg1 forTTSEvent:(id)arg2;
- (void)_populateWirelessHardwareInformationWithRouteInfo:(id)arg1 forTTSEvent:(id)arg2;
- (void)_prepareForTesting;
- (void)_resetBargeInDetectedEvent;
- (id)_responseContextWithPresentationType:(int)arg1 dialogPhase:(id)arg2 mode:(int)arg3;
- (id)_routeInfoForOutputRoute;
- (void)_willInstrument:(id)arg1 forTurn:(id)arg2;
- (id)associatedDialogIdentifiersForAceObjectIdentifier:(id)arg1;
- (void)boostQueuedMessagesAndPerformOnQueueCompletion:(id /* block */)arg1 timeout:(double)arg2;
- (id)cardIDforSnippetAceID:(id)arg1;
- (id)clientGeneratedDialogIdentifier;
- (id)currentInstrumentationTurnContext;
- (int)currentSiriUIState;
- (void)emitCasinoRelationshipEventWithViewIDFrom:(id)arg1 ViewIDTo:(id)arg2 casinoFromType:(int)arg3;
- (void)emitFinalSpeechTranscriptionEventForAceObjectWithIdentifier:(id)arg1;
- (void)emitInstrumentation:(id)arg1;
- (void)emitInstrumentation:(id)arg1 atTime:(unsigned long long)arg2;
- (void)emitPartialSpeechTranscriptionEventForAceObjectWithIdentifier:(id)arg1;
- (void)emitPunchOutEventWithURL:(id)arg1 appID:(id)arg2;
- (void)emitPunchOutEventWithURL:(id)arg1 appID:(id)arg2 punchoutOrigin:(int)arg3;
- (void)emitRequestFailedWithError:(id)arg1;
- (void)emitRevealSpeechTranscriptionEventForAceObjectWithIdentifier:(id)arg1;
- (void)emitTextToSpeechBeginEvent:(id)arg1;
- (void)emitTextToSpeechEndEvent:(id)arg1;
- (void)emitTextToSpeechRequestReceivedEventFor:(id)arg1 atTime:(unsigned long long)arg2;
- (void)emitUIStateTransitionEventWithFromState:(int)arg1 toState:(int)arg2 withPresentationType:(int)arg3 machAbsoluteTransitionTime:(double)arg4;
- (void)emitUIStateTransitionForSiriDismissalWithReason:(int)arg1;
- (void)emitUUFRCasinoCardSelectedEventWithCardSectionID:(id)arg1 ordinalCardSectionPosition:(long long)arg2 snippetAceId:(id)arg3;
- (void)emitUUFRPresentedEventWith:(id)arg1 snippetClass:(id)arg2 dialogIdentifier:(id)arg3 dialogPhase:(id)arg4;
- (void)emitUUFRShownForAceObject:(id)arg1 presentationType:(int)arg2 dialogPhase:(id)arg3;
- (void)emitUUFRShownForAceObject:(id)arg1 presentationType:(int)arg2 dialogPhase:(id)arg3 mode:(int)arg4 viewRegion:(int)arg5;
- (void)emitUUFRSpokenForAceObject:(id)arg1 presentationType:(int)arg2 dialogPhase:(id)arg3 mode:(int)arg4;
- (void)emitUUFRSpokenForAceObject:(id)arg1 presentationType:(int)arg2 dialogPhase:(id)arg3 mode:(int)arg4 speakableText:(id)arg5;
- (void)emitUserBargeInEventForBargedInTurn;
- (void)emitUserBargeInEventForBargedInTurn:(id)arg1 machAbsoluteTime:(double)arg2;
- (void)emitUserViewRegionInteractionEventWithViewRegion:(int)arg1 userViewInteraction:(int)arg2;
- (bool)hasNotYetEmittedLaunchContextEnd;
- (void)hostDidBecomeActive;
- (void)hostWillResignActive;
- (id)init;
- (id)latestStoredTurn;
- (id)previousInstrumentationTurnContext;
- (void)processSessionEvent:(long long)arg1 isSpeechSynthesisSpeaking:(bool)arg2 machAbsoluteTime:(double)arg3;
- (void)setClientGeneratedDialogIdentifier:(id)arg1;
- (void)setCurrentInstrumentationTurnContext:(id)arg1;
- (void)setCurrentSiriUIState:(int)arg1;
- (void)setDialogIdentifiers:(id)arg1 forAceViewSpeakableTextWithIdentifier:(id)arg2;
- (void)setHasNotYetEmittedLaunchContextEnd:(bool)arg1;
- (void)setPreviousInstrumentationTurnContext:(id)arg1;
- (void)storeCardID:(id)arg1 forSnippetAceID:(id)arg2;
- (void)storeClientGeneratedDUC:(id)arg1;
- (void)storeCurrentInstrumentationTurnContext:(id)arg1;

@end
