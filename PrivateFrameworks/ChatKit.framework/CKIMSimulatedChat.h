
@interface CKIMSimulatedChat : IMChat <CKIMSimulatedChatDelegate, CKIMSimulatedDaemonListener> {
    unsigned long long  _currentMessageID;
    <CKIMSimulatedChatDelegate> * _delegate;
    NSArray * _incomingHandles;
    IMHandle * _outgoingHandle;
    CKIMSimulatedAccount * _simulatedAccount;
    NSString * _simulatedChatIdentifier;
    NSString * _simulatedGUID;
}

@property (nonatomic, readonly) unsigned long long currentMessageID;
@property (nonatomic) <CKIMSimulatedChatDelegate> *delegate;
@property (nonatomic, readonly) NSArray *incomingHandles;
@property (nonatomic, readonly) IMHandle *outgoingHandle;
@property (nonatomic, readonly) CKIMSimulatedAccount *simulatedAccount;
@property (nonatomic, copy) NSString *simulatedChatIdentifier;
@property (nonatomic, readonly) NSString *simulatedGUID;

+ (id)prepopulatedChat;

- (void).cxx_destruct;
- (bool)_handleIncomingItem:(id)arg1;
- (id)_messageWithGUID:(id)arg1;
- (void)_sendMessage:(id)arg1 adjustingSender:(bool)arg2 shouldQueue:(bool)arg3;
- (id)account;
- (bool)allowedByScreenTime;
- (bool)allowedToShowConversation;
- (bool)allowedToShowConversationSync;
- (void)chat:(id)arg1 didSendMessage:(id)arg2 finished:(bool)arg3;
- (id)chatIdentifier;
- (unsigned char)chatStyle;
- (unsigned long long)currentMessageID;
- (id)delegate;
- (id)guid;
- (id)incomingHandles;
- (id)initWithIncomingIDs:(id)arg1 outgoingID:(id)arg2 messageIDOffset:(unsigned long long)arg3 service:(id)arg4;
- (id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 loadImmediately:(bool)arg3;
- (void)markAsAutoSpamReported;
- (void)markLastMessageAsUnread;
- (id)outgoingHandle;
- (id)participants;
- (id)recipient;
- (void)refreshServiceForSending;
- (void)remove;
- (void)sendMessage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSimulatedChatIdentifier:(id)arg1;
- (void)setValue:(id)arg1 forChatProperty:(id)arg2;
- (id)simulatedAccount;
- (id)simulatedChatIdentifier;
- (void)simulatedDaemon:(id)arg1 willSendBalloonPayload:(id)arg2 attachments:(id)arg3 messageGUID:(id)arg4 bundleID:(id)arg5;
- (id)simulatedGUID;
- (void)updateIsFiltered:(long long)arg1;

@end
