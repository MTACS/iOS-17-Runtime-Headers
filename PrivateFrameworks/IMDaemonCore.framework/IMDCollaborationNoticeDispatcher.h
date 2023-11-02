
@interface IMDCollaborationNoticeDispatcher : NSObject <IDSServiceDelegate> {
    IMDCollaborationClearNoticeRateLimiter * _clearRateLimiter;
    <IMDCollaborationNoticeDispatcherDelegate> * _delegate;
    IDSService * _gelatoService;
    IMDCollaborationNoticeRateLimiter * _rateLimiter;
}

@property (nonatomic, retain) IMDCollaborationClearNoticeRateLimiter *clearRateLimiter;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <IMDCollaborationNoticeDispatcherDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) IDSService *gelatoService;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IMDCollaborationNoticeRateLimiter *rateLimiter;
@property (readonly) Class superclass;

+ (Class)_SWCollaborationClearNoticeTransmissionMessageClass;
+ (Class)_SWCollaborationNoticeTransmissionMessageClass;
+ (unsigned long long)noticeFanoutThreshold;
+ (id)unarchiveNoticeTransmissionEvent:(id)arg1;

- (void).cxx_destruct;
- (id)_handlesMinusSenderServiceAccountID:(id)arg1;
- (id)_senderServiceAccountIDFrom:(id)arg1;
- (id)clearRateLimiter;
- (void)dealloc;
- (id)delegate;
- (id)gelatoService;
- (void)handleIncomingNoticeProtobuf:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (id)init;
- (id)rateLimiter;
- (void)reflectDismissalForNoticeGUIDs:(id)arg1;
- (void)sendClearNotice:(id)arg1 toHandles:(id)arg2;
- (void)sendNotice:(id)arg1 toHandles:(id)arg2 fromHandle:(id)arg3;
- (id)senderLoginIDs;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)setClearRateLimiter:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGelatoService:(id)arg1;
- (void)setRateLimiter:(id)arg1;

@end
