
@interface CKIMDaemonController : IMDaemonController {
    NSArray * _listeners;
    NSProtocolChecker * _protocol;
}

@property (nonatomic, retain) NSArray *listeners;
@property (nonatomic, retain) NSProtocolChecker *protocol;

+ (void)beginSimulatingDaemon;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_agentDidLaunchNotification:(id)arg1;
- (void)_capabilitiesDidChange;
- (void)blockUntilConnected;
- (void)broadcastCloudKitState;
- (void)broadcastCloudKitStateAfterFetchingAccountStatus;
- (bool)connectToDaemonWithLaunch:(bool)arg1;
- (bool)connectToDaemonWithLaunch:(bool)arg1 capabilities:(unsigned int)arg2 blockUntilConnected:(bool)arg3;
- (void)deleteMessageWithGUIDs:(id)arg1 queryID:(id)arg2;
- (void)fetchCommonCapabilities:(id)arg1 fromChatWithGUID:(id)arg2 reply:(id /* block */)arg3;
- (void)fileTransfer:(id)arg1 acceptedWithPath:(id)arg2 autoRename:(bool)arg3 overwrite:(bool)arg4 options:(long long)arg5;
- (void)fileTransfer:(id)arg1 createdWithProperties:(id)arg2;
- (void)fileTransferRemoved:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (void)joinChatID:(id)arg1 handleInfo:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 groupID:(id)arg5 lastAddressedHandle:(id)arg6 lastAddressedSIMID:(id)arg7 joinProperties:(id)arg8 account:(id)arg9;
- (id)listeners;
- (void)markAsSpamForIDs:(id)arg1 style:(unsigned char)arg2 onServices:(id)arg3 chatID:(id)arg4 queryID:(id)arg5 autoReport:(bool)arg6;
- (void)markReadForIDs:(id)arg1 style:(unsigned char)arg2 onServices:(id)arg3 messages:(id)arg4 clientUnreadCount:(long long)arg5 setUnreadCountToZero:(bool)arg6;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)protocol;
- (id)queryController;
- (void)requestNetworkDataAvailability;
- (void)requestPendingMessages;
- (void)sendBalloonPayload:(id)arg1 attachments:(id)arg2 withMessageGUID:(id)arg3 bundleID:(id)arg4;
- (void)setListeners:(id)arg1;
- (void)setProtocol:(id)arg1;
- (id)synchronousRemoteDaemon;

@end
