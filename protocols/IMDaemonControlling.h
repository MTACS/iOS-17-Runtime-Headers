
@protocol IMDaemonControlling <NSObject>

@required

- (bool)addListenerID:(NSString *)arg1 capabilities:(unsigned int)arg2;
- (unsigned int)capabilities;
- (unsigned int)capabilitiesForListenerID:(NSString *)arg1;
- (bool)hasListenerForID:(NSString *)arg1;
- (bool)isConnected;
- (IMDaemonListener *)listener;
- (IMDaemonQueryController *)queryController;
- (<IMDaemonProtocol> *)remoteDaemon;
- (bool)removeListenerID:(NSString *)arg1;
- (<IMDaemonProtocol> *)replyingRemoteDaemon;
- (bool)setCapabilities:(unsigned int)arg1 forListenerID:(NSString *)arg2;
- (<IMDaemonProtocol> *)synchronousRemoteDaemon;
- (<IMDaemonProtocol> *)synchronousReplyingRemoteDaemon;

@end
