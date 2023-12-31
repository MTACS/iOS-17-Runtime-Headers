
@interface IMAssistantMessageSetAttributeHandler : IMAssistantMessageHandler <INSetMessageAttributeIntentHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)handleSetMessageAttribute:(id)arg1 completion:(id /* block */)arg2;

@end
