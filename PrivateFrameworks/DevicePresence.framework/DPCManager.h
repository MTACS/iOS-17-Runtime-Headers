
@interface DPCManager : NSObject {
    <DPCWatchPresenceDelegate> * _delegate;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic) <DPCWatchPresenceDelegate> *delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (void)getCurrentWatchPresenceStatus;
- (id)initWithDelegate:(id)arg1;
- (void)registerForWatchPresence;
- (void)setDelegate:(id)arg1;
- (void)setNewEvent:(unsigned long long)arg1;
- (void)setStreamingMode:(bool)arg1;
- (void)setWatchNewEvent:(unsigned long long)arg1;
- (void)setupWatchPresenceDetection;
- (void)setupXPCConnection;
- (void)startWatchPresenceUpdate;
- (void)stopWatchPresenceUpdate;
- (void)unregisterForWatchPresence;
- (void)updateWatchPresenceStatus;

@end
