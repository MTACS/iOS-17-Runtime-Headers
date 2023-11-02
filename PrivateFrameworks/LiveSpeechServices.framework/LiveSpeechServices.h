
@interface LiveSpeechServices : NSObject <AXUIClientDelegate> {
    void $__lazy_storage_$_liveSpeechDefaults;
    void _client;
}

@property (nonatomic, readonly) NSArray *favoritePhrases;
@property (nonatomic, readonly) NSString *phraseShortcutKey;
@property (nonatomic, readonly) NSString *phraseTextKey;
@property (nonatomic, readonly) NSString *serviceName;

+ (id)shared;

- (void).cxx_destruct;
- (void)addFavoritePhrase:(id)arg1;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1;
- (void)dealloc;
- (id)favoritePhrases;
- (id)init;
- (id)observeFavoritePhrasesChanges:(id /* block */)arg1;
- (id)phraseShortcutKey;
- (id)phraseTextKey;
- (void)removeFavoritePhrase:(id)arg1;
- (id)serviceName;
- (bool)startLiveSpeechAndReturnError:(id*)arg1;
- (bool)stopLiveSpeechAndReturnError:(id*)arg1;
- (id)userInterfaceClient:(id)arg1 accessQueueForProcessingMessageWithIdentifier:(long long)arg2;

@end
