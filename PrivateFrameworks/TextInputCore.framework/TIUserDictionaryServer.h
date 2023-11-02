
@interface TIUserDictionaryServer : NSObject <TIKeyboardActivityObserving, TIUserDictionaryServing> {
    NSArray * _cache;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    unsigned long long  _keyboardActivityState;
    NSMutableArray * _observers;
    int  _pendingUpdates;
    long long  _recentClientCount;
    _KSTextReplacementServer * _textReplacementServer;
    bool  _updating;
    NSUUID * _userDictionaryUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) _KSTextReplacementServer *textReplacementServer;
@property (nonatomic, copy) NSUUID *userDictionaryUUID;

+ (double)decrementClientDelay;
+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;
+ (id)singletonInstance;

- (void).cxx_destruct;
- (id)addObserver:(id /* block */)arg1;
- (void)dealloc;
- (void)decrementRecentClientCountAfterDelay;
- (void)getPhraseShortcutPairs:(id /* block */)arg1;
- (void)handleIdleTimeout;
- (void)incrementRecentClientCount;
- (id)init;
- (void)keyboardActivityDidTransition:(id)arg1;
- (void)loadPhraseShortcutPairs:(id /* block */)arg1;
- (void)managedKeyboardSettingsDidChange:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)resetCache;
- (void)setTextReplacementServer:(id)arg1;
- (void)setUserDictionaryUUID:(id)arg1;
- (void)startServer;
- (id)textReplacementServer;
- (void)updateCache;
- (id)userDictionaryUUID;

@end
