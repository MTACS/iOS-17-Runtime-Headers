
@interface IMAssistantIntentHandler : _INExtension {
    NSMutableArray * _recentIntentHandlers;
}

- (void).cxx_destruct;
- (id)existingHandlerForIntentIdentifier:(id)arg1;
- (id)handlerForIntent:(id)arg1;
- (id)init;
- (void)updateRecentlyUsedHandlersWithHandler:(id)arg1;

@end
