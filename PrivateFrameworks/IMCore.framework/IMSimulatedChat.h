
@interface IMSimulatedChat : IMChat <IMSimulatedChatDelegate, IMSimulatedDaemonListener> {
    unsigned long long  _currentMessageID;
    <IMSimulatedChatDelegate> * _delegate;
    NSMutableDictionary * _guidToMessageItemNeedingAckMap;
    IMSimulatedAccount * _simulatedAccount;
    NSMutableArray * _simulatedAttachments;
    NSString * _simulatedChatIdentifier;
    NSString * _simulatedDisplayName;
    bool  _useTimedAck;
}

@property (nonatomic, readonly) unsigned long long currentMessageID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <IMSimulatedChatDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *guidToMessageItemNeedingAckMap;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) IMSimulatedAccount *simulatedAccount;
@property (nonatomic, readonly) NSMutableArray *simulatedAttachments;
@property (nonatomic, copy) NSString *simulatedChatIdentifier;
@property (nonatomic, copy) NSString *simulatedDisplayName;
@property (readonly) Class superclass;
@property (getter=shouldUseTimedAck, nonatomic) bool useTimedAck;

- (void).cxx_destruct;
- (bool)_handleIncomingItem:(id)arg1;
- (id)_messageWithGUID:(id)arg1;
- (id)_messagesToProcessFromMessage:(id)arg1;
- (void)_processMessage:(id)arg1 receivingHandle:(id)arg2 sendingHandle:(id)arg3;
- (id)account;
- (id)attachments;
- (void)beginObservingHandleAvailability;
- (id)chatIdentifier;
- (unsigned long long)currentMessageID;
- (id)daemonController;
- (id)delegate;
- (id)displayName;
- (id)guidToMessageItemNeedingAckMap;
- (id)initWithIncomingIDs:(id)arg1 messageIDOffset:(unsigned long long)arg2 account:(id)arg3;
- (long long)joinState;
- (id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 loadImmediately:(bool)arg3;
- (void)markAsAutoSpamReported;
- (void)markAsHasBeenBlockContact;
- (void)receiveDemoMessage:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setGuidToMessageItemNeedingAckMap:(id)arg1;
- (void)setSimulatedChatIdentifier:(id)arg1;
- (void)setSimulatedDisplayName:(id)arg1;
- (void)setUseTimedAck:(bool)arg1;
- (bool)shouldUseTimedAck;
- (void)simulateMessageDeliveryForGUID:(id)arg1;
- (id)simulatedAccount;
- (id)simulatedAttachments;
- (void)simulatedChat:(id)arg1 didHandleItem:(id)arg2;
- (void)simulatedChat:(id)arg1 didSendMessage:(id)arg2;
- (id)simulatedChatIdentifier;
- (void)simulatedDaemon:(id)arg1 willSendBalloonPayload:(id)arg2 attachments:(id)arg3 messageGUID:(id)arg4 bundleID:(id)arg5;
- (id)simulatedDisplayName;

@end
