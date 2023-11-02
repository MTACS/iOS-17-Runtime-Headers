
@interface LNFetchActionForAutoShortcutPhraseOperation : LNInterfaceConnectionOperation {
    NSString * _autoShortcutPhrase;
    id /* block */  _completionHandler;
    LNAction * _result;
}

@property (nonatomic, copy) NSString *autoShortcutPhrase;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) LNAction *result;

- (void).cxx_destruct;
- (id)autoShortcutPhrase;
- (id /* block */)completionHandler;
- (void)finishWithError:(id)arg1;
- (id)initWithConnectionInterface:(id)arg1 autoShortcutPhrase:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)result;
- (void)setAutoShortcutPhrase:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setResult:(id)arg1;
- (void)start;

@end
