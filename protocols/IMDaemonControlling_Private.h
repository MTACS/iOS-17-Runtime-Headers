
@protocol IMDaemonControlling_Private <NSObject>

@required

+ (void)_blockUntilSendQueueIsEmpty;

- (void)_blockUntilSendQueueIsEmpty;
- (bool)_blocksConnectionAtResume;
- (NSArray *)_servicesToAllow;
- (NSArray *)_servicesToDeny;
- (void)_setBlocksConnectionAtResume:(bool)arg1;
- (void)_setListenerID:(NSString *)arg1;
- (void)_setServicesToAllow:(NSArray *)arg1;
- (void)_setServicesToDeny:(NSArray *)arg1;
- (void)blockUntilConnected;
- (bool)connectToDaemon;
- (bool)connectToDaemonWithLaunch:(bool)arg1;
- (bool)connectToDaemonWithLaunch:(bool)arg1 capabilities:(unsigned int)arg2 blockUntilConnected:(bool)arg3;
- (id)delegate;
- (void)disconnectFromDaemon;
- (bool)isConnecting;
- (void)killDaemon;
- (NSString *)listenerID;
- (void)setDelegate:(id)arg1;

@end
