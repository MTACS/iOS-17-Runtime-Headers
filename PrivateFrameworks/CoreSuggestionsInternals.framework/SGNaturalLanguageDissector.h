
@interface SGNaturalLanguageDissector : SGPipelineDissector <SGMailMessageProcessing, SGTextMessageProcessing> {
    NSMutableDictionary * _conversations;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_personForCSPerson:(id)arg1;
+ (bool)allowNaturalLanguageDissector;
+ (id)ipsosMessageWithMailMessage:(id)arg1 store:(id)arg2;
+ (id)ipsosMessageWithTextMessage:(id)arg1 store:(id)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (bool)_shouldProcessMessage:(id)arg1 entity:(id)arg2;
- (void)_tagNaturalLanguageEnrichmentsForEntity:(id)arg1;
- (void)addEnrichmentForEvents:(id)arg1 forMessage:(id)arg2 toEntity:(id)arg3;
- (void)clearConversations;
- (id)conversationWithIdentifier:(id)arg1;
- (void)dissectMailMessage:(id)arg1 entity:(id)arg2 context:(id)arg3;
- (void)dissectTextMessage:(id)arg1 entity:(id)arg2 context:(id)arg3;

@end
