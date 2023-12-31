
@interface TKSmartCardSessionEngine : NSObject <TKProtocolSmartCardSession> {
    bool  _active;
    NSXPCConnection * _connection;
    long long  _endPolicy;
    TKSmartCardSlotEngine * _slot;
    bool  _transmitting;
    bool  _valid;
}

@property bool active;
@property (nonatomic, readonly) NSXPCConnection *connection;
@property long long endPolicy;
@property bool valid;

- (void).cxx_destruct;
- (bool)active;
- (id)connection;
- (void)dealloc;
- (long long)endPolicy;
- (id)initWithSlot:(id)arg1 connection:(id)arg2;
- (void)setActive:(bool)arg1;
- (void)setEndPolicy:(long long)arg1;
- (void)setSessionEndPolicy:(long long)arg1;
- (void)setValid:(bool)arg1;
- (void)terminateWithReply:(id /* block */)arg1;
- (void)transmit:(id)arg1 reply:(id /* block */)arg2;
- (bool)valid;

@end
