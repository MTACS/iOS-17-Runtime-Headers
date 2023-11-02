
@interface TSDKextNotifier : TSDIOKServiceMatcher {
    NSMutableArray * _matchNotificationsArray;
    NSMutableArray * _terminateNotificationsArray;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)notifyWhenServiceIsAvailable:(id /* block */)arg1;
- (void)notifyWhenServiceIsUnavailable:(id /* block */)arg1;
- (void)serviceMatched:(id)arg1;
- (void)serviceTerminated:(id)arg1;

@end
