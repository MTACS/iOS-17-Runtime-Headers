
@interface AXWatchRemoteScreenServices.AXWatchRemoteScreenService : NSObject <AXWatchRemoteScreenServiceProtocolObjc> {
    void serviceImpl;
    void twiceEnabledEvent;
    void twiceEnabledKey;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (bool)npsSetTwiceEnabled:(bool)arg1;
- (bool)startTwiceRemoteScreen;
- (bool)stopTwiceRemoteScreen;

@end
