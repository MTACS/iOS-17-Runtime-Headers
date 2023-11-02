
@interface SBApplicationPrivacyPreflightController : NSObject <BSDescriptionStreamable> {
    LSApplicationIdentity * _applicationIdentity;
    NSMutableDictionary * _pendingCompletionsBySceneIdentifier;
    <PDCPreflightRequestCanceling> * _preflightCancelToken;
    PDCPreflightManager * _privacyPreflightManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_notePreflightFinishedWithResult:(unsigned long long)arg1 cancelToken:(id)arg2;
- (void)addPendingCompletion:(id /* block */)arg1 forSceneIdentifier:(id)arg2;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)description;
- (id)initWithPreflightManager:(id)arg1 applicationIdentity:(id)arg2;
- (void)notePreflightFinishedWithResult:(unsigned long long)arg1;

@end
