
@interface EMListUnsubscribeDetector : NSObject {
    <EMMutableDictionaryProtocol> * _persistentDictionary;
}

+ (id)receivingAccountFromMessage:(id)arg1;
+ (id)validatedUnsubscribeTypeForHeader:(id)arg1;

- (void).cxx_destruct;
- (id)_listIDString:(id)arg1;
- (id)_normalizedAddress:(id)arg1;
- (id)_persistentKeyForHeaders:(id)arg1;
- (id)_senderString:(id)arg1;
- (bool)_shouldIgnoreMessageWithHeaders:(id)arg1;
- (void)acceptCommand:(id)arg1;
- (id)commandForMessage:(id)arg1;
- (void)ignoreCommand:(id)arg1;
- (id)init;
- (id)initWithMutableDictionary:(id)arg1;
- (void)removeAllPersistedCommands;

@end
