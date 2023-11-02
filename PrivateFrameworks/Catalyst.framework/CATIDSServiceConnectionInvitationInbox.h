
@interface CATIDSServiceConnectionInvitationInbox : NSObject {
    <CATIDSServiceConnectionInvitationInboxDelegate> * _delegate;
    double  mAcknowledgeTimeout;
    NSMutableDictionary * mAcknowledgeTimersByInvitationID;
    <CATAssertionProviding> * mAssertionProvider;
    NSMutableDictionary * mInvitationsByInvitationID;
    <CATTimerSource> * mTimerSource;
    NSObject<OS_dispatch_queue> * mWorkQueue;
}

@property (nonatomic) <CATIDSServiceConnectionInvitationInboxDelegate> *delegate;

+ (id)acknowledgeTimerIdentifier;

- (void).cxx_destruct;
- (void)acknowledgeTimerFiredWithInvitationIdentifier:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithTimerSource:(id)arg1 assertionProvider:(id)arg2 workQueue:(id)arg3 acknowledgeTimeout:(double)arg4;
- (void)receiveAcknowledgeForInvitationIdentifier:(id)arg1 connectionIdentifier:(id)arg2;
- (void)receiveInvitationWithIdentifier:(id)arg1 senderAppleID:(id)arg2 senderAddress:(id)arg3 messagingVersion:(unsigned long long)arg4 userInfo:(id)arg5;
- (void)setDelegate:(id)arg1;

@end
