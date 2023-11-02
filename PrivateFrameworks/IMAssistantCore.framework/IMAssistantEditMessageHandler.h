
@interface IMAssistantEditMessageHandler : IMAssistantMessageQueryHandler <INEditMessageIntentHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)chatsForMessageIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (void)confirmEditMessage:(id)arg1 completion:(id /* block */)arg2;
- (void)handleEditMessage:(id)arg1 completion:(id /* block */)arg2;
- (void)resolveEditedContentForEditMessage:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)sendEditedMessageItem:(id)arg1 originalMessageItem:(id)arg2 chat:(id)arg3 backwardCompatabilityText:(id)arg4;

@end
