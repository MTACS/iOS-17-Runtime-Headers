
@interface SiriUIInstrumentationManager : NSObject <AFAnalyticsDialogIdentifierAssociationProvider>

@property (readonly) AFAnalyticsTurnBasedInstrumentationContext *currentInstrumentationTurnContext;

+ (id)sharedManager;

- (id)associatedDialogIdentifiersForAceObjectIdentifier:(id)arg1;
- (id)currentInstrumentationTurnContext;
- (void)emitUUFRPresentedEventWith:(id)arg1 snippetClass:(id)arg2 dialogIdentifier:(id)arg3 dialogPhase:(id)arg4;
- (id)init;
- (void)storeCurrentInstrumentationTurnContext:(id)arg1;

@end
