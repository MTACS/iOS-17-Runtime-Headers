
@interface SROSmartRepliesManager : NSObject {
    _TtC12SmartReplies21SRSmartRepliesManager * _backingManager;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (void)primeResponsesExperimentsIfNeeded;
- (void)registerResponse:(id)arg1 forMessage:(id)arg2 time:(id)arg3 metadata:(id)arg4 withLanguage:(id)arg5;
- (void)registerResponseDisplayedAtIndex:(id)arg1;
- (void)registerResponseDisplayedAtIndex:(id)arg1 withDisplaySetting:(id)arg2;
- (id)suggestionsForRequest:(id)arg1;
- (void)suggestionsForRequest:(id)arg1 withCompletion:(id /* block */)arg2;

@end
