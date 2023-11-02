
@interface GEOServer : NSObject {
    GEODaemon * _daemon;
}

@property (nonatomic, readonly) GEODaemon *daemon;

+ (id)identifier;
+ (unsigned long long)launchMode;
+ (bool)messageSupportsOffline:(id)arg1;
+ (Class)peerClass;
+ (id)possibleXPCActivityIdentifiers;
+ (bool)wantsPerMessageSignposts;

- (void).cxx_destruct;
- (id)daemon;
- (id)description;
- (bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3;
- (id)init;
- (id)initWithDaemon:(id)arg1;
- (void)peerDidConnect:(id)arg1;
- (void)peerDidDisconnect:(id)arg1;
- (void)runXPCActivity:(id)arg1;

@end
