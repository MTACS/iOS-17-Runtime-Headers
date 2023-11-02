
@interface CATIDSServiceConnectionConfiguration : NSObject {
    double  _invitationAcknowledgeTimeout;
    unsigned long long  _keepAliveAttemptCount;
    double  _keepAliveCheckinInterval;
    long long  _maxDataSendSize;
    double  _messageQueueFlushPromptInterval;
    double  _missingItemsCheckinInterval;
}

@property (nonatomic) double invitationAcknowledgeTimeout;
@property (nonatomic) unsigned long long keepAliveAttemptCount;
@property (nonatomic) double keepAliveCheckinInterval;
@property (nonatomic) long long maxDataSendSize;
@property (nonatomic) double messageQueueFlushPromptInterval;
@property (nonatomic) double missingItemsCheckinInterval;

- (id)init;
- (double)invitationAcknowledgeTimeout;
- (unsigned long long)keepAliveAttemptCount;
- (double)keepAliveCheckinInterval;
- (long long)maxDataSendSize;
- (double)messageQueueFlushPromptInterval;
- (double)missingItemsCheckinInterval;
- (void)setInvitationAcknowledgeTimeout:(double)arg1;
- (void)setKeepAliveAttemptCount:(unsigned long long)arg1;
- (void)setKeepAliveCheckinInterval:(double)arg1;
- (void)setMaxDataSendSize:(long long)arg1;
- (void)setMessageQueueFlushPromptInterval:(double)arg1;
- (void)setMissingItemsCheckinInterval:(double)arg1;

@end
