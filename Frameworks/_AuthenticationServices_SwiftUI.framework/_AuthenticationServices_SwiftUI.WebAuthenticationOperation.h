
@interface _AuthenticationServices_SwiftUI.WebAuthenticationOperation : NSOperation {
    void authenticationCompletionHandler;
    void authenticationSession;
    void presentationAnchorProvider;
    void presentationContextProvider;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  requestContext;
    void stateStorage;
}

@property (nonatomic, readonly) bool asynchronous;
@property (nonatomic, readonly) bool executing;
@property (nonatomic, readonly) bool finished;

- (void).cxx_destruct;
- (void)cancel;
- (id)init;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (void)start;

@end
