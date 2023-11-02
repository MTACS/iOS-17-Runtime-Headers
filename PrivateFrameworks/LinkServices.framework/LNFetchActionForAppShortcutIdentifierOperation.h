
@interface LNFetchActionForAppShortcutIdentifierOperation : LNInterfaceConnectionOperation {
    NSString * _appShortcutIdentifier;
    id /* block */  _completionHandler;
    LNAppShortcutActionData * _result;
}

@property (nonatomic, copy) NSString *appShortcutIdentifier;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) LNAppShortcutActionData *result;

- (void).cxx_destruct;
- (id)appShortcutIdentifier;
- (id /* block */)completionHandler;
- (void)finishWithError:(id)arg1;
- (id)initWithConnectionInterface:(id)arg1 appShortcutIdentifier:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)result;
- (void)setAppShortcutIdentifier:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setResult:(id)arg1;
- (void)start;

@end
