
@interface ICAccountPassphraseManager : NSObject {
    ICAccount * _account;
    UIWindow * _window;
}

@property (nonatomic, readonly) ICAccount *account;
@property (nonatomic) UIWindow *window;

- (void).cxx_destruct;
- (id)account;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)changePassphrase:(id)arg1 toPassphrase:(id)arg2 hint:(id)arg3 completion:(id /* block */)arg4;
- (id)initWithAccount:(id)arg1;
- (bool)removePassphrase;
- (bool)setPassphrase:(id)arg1 hint:(id)arg2;
- (bool)setPassphrase:(id)arg1 hint:(id)arg2 isReset:(bool)arg3;
- (void)setWindow:(id)arg1;
- (void)updateDivergedNotesFromPassphrase:(id)arg1 toAccountPassphrase:(id)arg2 completion:(id /* block */)arg3;
- (void)updateDivergedNotesWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (id)window;

@end
