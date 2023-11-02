
@interface SRUIFAnalyticsSupplement : NSObject {
    NSMutableDictionary * _aceObjectDialogPhaseDictionary;
    NSArray * _generatedAceCommands;
    int  _lastComputedMode;
    NSString * _lastComputedRefId;
}

- (void).cxx_destruct;
- (int)computedModeForAceCommand:(id)arg1;
- (int)computedModeForRefId:(id)arg1;
- (id)dialogPhaseForAceObject:(id)arg1;
- (void)didComputeMode:(int)arg1 forAceCommand:(id)arg2 generatedAceCommands:(id)arg3;
- (void)storeDialogPhasesForItemsAtIndexPaths:(id)arg1 forConversation:(id)arg2;

@end
