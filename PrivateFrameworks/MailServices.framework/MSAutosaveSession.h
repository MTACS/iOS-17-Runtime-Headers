
@interface MSAutosaveSession : NSObject {
    NSString * _autosaveIdentifier;
    <MSDAutosaveProtocol> * _remoteService;
    <MSDAutosaveSessionProtocol> * _remoteSession;
}

@property (nonatomic, readonly, copy) NSString *autosaveIdentifier;
@property (nonatomic, retain) <MSDAutosaveProtocol> *remoteService;
@property (nonatomic, retain) <MSDAutosaveSessionProtocol> *remoteSession;

+ (id)log;

- (void).cxx_destruct;
- (id)autosaveIdentifier;
- (void)didReconnectRemoteSession:(id)arg1 remoteService:(id)arg2;
- (id)initWithIdentifier:(id)arg1 remoteSession:(id)arg2 remoteService:(id)arg3;
- (id)remoteService;
- (id)remoteSession;
- (void)remoteSessionDisconnectedWithError:(id)arg1;
- (void)setRemoteService:(id)arg1;
- (void)setRemoteSession:(id)arg1;

@end
