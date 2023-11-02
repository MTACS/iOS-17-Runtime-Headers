
@interface SBInCallTransientOverlayPresentationWorkspaceTransaction : SBMainWorkspaceTransaction {
    NSString * _analyticsSource;
    SBInCallPresentationSession * _sourcePresentationSession;
}

@property (nonatomic, readonly, copy) NSString *analyticsSource;
@property (nonatomic, readonly) SBInCallPresentationSession *sourcePresentationSession;

- (void).cxx_destruct;
- (void)_begin;
- (void)_performInCallPresentationWithCompletion:(id /* block */)arg1;
- (id)analyticsSource;
- (id)initWithTransitionRequest:(id)arg1 sourcePresentationSession:(id)arg2 analyticsSource:(id)arg3;
- (id)sourcePresentationSession;

@end
