
@interface LNFetchAppShortcutParametersConnectionOperation : LNInterfaceConnectionOperation {
    NSArray * _appShortcutSubstitutions;
    id /* block */  _completionHandler;
    NSArray * _parameterPresentationSubstitutions;
    NSArray * _spans;
}

@property (nonatomic, retain) NSArray *appShortcutSubstitutions;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) NSArray *parameterPresentationSubstitutions;
@property (nonatomic, retain) NSArray *spans;

- (void).cxx_destruct;
- (id)appShortcutSubstitutions;
- (id /* block */)completionHandler;
- (void)finishWithError:(id)arg1;
- (id)initWithConnectionInterface:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)parameterPresentationSubstitutions;
- (void)setAppShortcutSubstitutions:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setParameterPresentationSubstitutions:(id)arg1;
- (void)setSpans:(id)arg1;
- (id)spans;
- (void)start;

@end
