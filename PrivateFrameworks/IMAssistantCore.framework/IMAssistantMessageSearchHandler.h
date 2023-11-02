
@interface IMAssistantMessageSearchHandler : IMAssistantMessageQueryHandler <INSearchForMessagesIntentHandling> {
    <IMAssistantMessageAttributeSanitizer> * _attributeSanitizer;
}

@property (nonatomic, retain) <IMAssistantMessageAttributeSanitizer> *attributeSanitizer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)attributeSanitizer;
- (void)handleSearchForMessages:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithAttributeSanitizer:(id)arg1 intentIdentifier:(id)arg2;
- (id)initWithDataSource:(id)arg1 attributeSanitizer:(id)arg2 intentIdentifier:(id)arg3;
- (id)initWithDataSource:(id)arg1 intentIdentifier:(id)arg2;
- (id)initWithIntentIdentifier:(id)arg1;
- (void)resolveAttributesForSearchForMessages:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveRecipientsAndSender:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveRecipientsForSearchForMessages:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveSendersForSearchForMessages:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)resolveSpeakableGroupNames:(id)arg1 forIntent:(id)arg2;
- (void)resolveSpeakableGroupNamesForSearchForMessages:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setAttributeSanitizer:(id)arg1;

@end
