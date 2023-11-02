
@interface _AuthenticationServices_SwiftUI.AuthorizationOperation : NSOperation <ASAuthorizationControllerDelegate, ASAuthorizationControllerPresentationContextProviding> {
    void authorizationCompletionHandler;
    void authorizationController;
    void presentationAnchorProvider;
    void presentationContextProvider;
    void requestContext;
    void stateStorage;
}

@property (nonatomic, readonly) bool asynchronous;
@property (nonatomic, readonly) bool executing;
@property (nonatomic, readonly) bool finished;

- (void).cxx_destruct;
- (void)authorizationController:(id)arg1 didCompleteWithAuthorization:(id)arg2;
- (void)authorizationController:(id)arg1 didCompleteWithError:(id)arg2;
- (void)cancel;
- (id)init;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (id)presentationAnchorForAuthorizationController:(id)arg1;
- (void)start;

@end
