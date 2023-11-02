
@interface IMAssistantUnsendMessagesHandler : IMAssistantMessageQueryHandler <INUnsendMessagesIntentHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)makeRetractedMessageItem:(id)arg1;

- (void)chatsForMessageIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (void)handleUnsendMessages:(id)arg1 completion:(id /* block */)arg2;
- (void)retractPartIndex:(long long)arg1 fromMessageItem:(id)arg2 chat:(id)arg3 backwardCompatabilityText:(id)arg4;

@end
