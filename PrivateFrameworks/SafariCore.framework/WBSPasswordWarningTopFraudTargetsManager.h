
@interface WBSPasswordWarningTopFraudTargetsManager : NSObject {
    WBSRemotePlistController * _plistController;
}

- (void).cxx_destruct;
- (id)_initWithBuiltinListURL:(id)arg1 shouldAttemptToUpdateConfiguration:(bool)arg2;
- (void)dealloc;
- (void)getTopFraudTargetsWithCompletionHandler:(id /* block */)arg1;
- (id)init;

@end
