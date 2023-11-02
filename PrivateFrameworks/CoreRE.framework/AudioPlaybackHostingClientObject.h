
@interface AudioPlaybackHostingClientObject : NSObject <REAudioPlaybackHostingService> {
    NSXPCConnection * _connection;
    unsigned long long  _connectionIdentifier;
}

@property (readonly) NSXPCConnection *connection;
@property (readonly) unsigned long long connectionIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)connection;
- (unsigned long long)connectionIdentifier;
- (id)initWithConnection:(id)arg1 connectionIdentifier:(unsigned long long)arg2;
- (void)start;

@end
