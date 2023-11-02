
@interface WBSPrivateRelayFailClosedExceptionManager : NSObject {
    NSMutableSet * _clearedExceptionsForBrowsingSession;
    NSMutableSet * _privateRelayFailClosedExceptions;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)clearPrivateRelayFailClosedExceptionIfNecessaryForURL:(id)arg1;
- (id)init;
- (void)rememberPrivateRelayFailClosedExceptionForURL:(id)arg1;
- (bool)shouldPrivateRelayFailClosedExceptionApplyForURL:(id)arg1;
- (bool)wasExceptionClearedForCurrentBrowsingSession:(id)arg1;

@end
