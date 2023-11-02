
@interface SiriSharedUICompactHostingInstrumentationSupplement : NSObject {
    SRUIFInstrumentationManager * _instrumentationManager;
}

- (void).cxx_destruct;
- (void)_logPunchOutEventForSiriViewController:(id)arg1 aceCommand:(id)arg2 URL:(id)arg3 appID:(id)arg4 sashItem:(id)arg5 shouldCreateNewTurn:(bool)arg6;
- (bool)_shouldCreateNewTurnForSiriViewControllerInteraction:(id)arg1 sashItem:(id)arg2;
- (void)configureSiriViewControllerWithCurrentTurn:(id)arg1;
- (id)initWithInstrumentationManager:(id)arg1;
- (void)logDrillInInteractionForSnippetViewControllerIfNecessary:(id)arg1;
- (void)logPunchOutEventForSiriViewController:(id)arg1 aceCommand:(id)arg2 URL:(id)arg3 appID:(id)arg4 sashItem:(id)arg5;
- (void)logPunchOutEventForSiriViewController:(id)arg1 aceCommands:(id)arg2 sashItem:(id)arg3;
- (int)viewRegionForPresentedAceObject:(id)arg1 resultTrasncriptItems:(id)arg2 conversationTranscriptItems:(id)arg3 serverUtterances:(id)arg4;

@end
