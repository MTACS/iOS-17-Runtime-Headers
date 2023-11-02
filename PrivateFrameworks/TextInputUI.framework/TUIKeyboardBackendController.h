
@interface TUIKeyboardBackendController : NSObject {
    bool  _applicationIsInBackground;
    TIKeyboardInputManagerStub * _inputManager;
    bool  _needsRestoreSupplementalLexicons;
    NSObject<OS_dispatch_source> * _supplementalLexiconWatchdog;
    NSHashTable * _supplementalLexicons;
}

@property (nonatomic, retain) TIKeyboardInputManagerStub *inputManager;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *supplementalLexiconWatchdog;
@property (nonatomic, readonly) NSHashTable *supplementalLexicons;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_restoreSupplementalLexiconsIfNeeded;
- (void)addUISupplementalLexicon:(id)arg1;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)generateAutocorrectionsWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 requestToken:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)generateAutocorrectionsWithKeyboardState:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)handleKeyboardInput:(id)arg1 keyboardState:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)inputManager;
- (void)performHitTestForTouchEvents:(id)arg1 keyboardState:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removeUISupplementalLexicon:(id)arg1;
- (void)setInputManager:(id)arg1;
- (void)setSupplementalLexiconWatchdog:(id)arg1;
- (void)stickerWithIdentifier:(id)arg1 stickerRoles:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)supplementalLexiconWatchdog;
- (id)supplementalLexicons;
- (void)syncToKeyboardState:(id)arg1 completionHandler:(id /* block */)arg2;

@end
