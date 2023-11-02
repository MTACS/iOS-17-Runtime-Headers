
@interface EDMessagePersistenceStatistics : NSObject {
    unsigned long long  _attachmentsIndexed;
    unsigned long long  _attachmentsToIndex;
    double  _duration;
    unsigned long long  _indexableAttachments;
    unsigned long long  _indexableMessages;
    unsigned long long  _messageData;
    unsigned long long  _messageDataDeleted;
    unsigned long long  _messages;
    unsigned long long  _messagesDeleted;
    double  _start;
}

@property (nonatomic) unsigned long long attachmentsIndexed;
@property (nonatomic) unsigned long long attachmentsToIndex;
@property (nonatomic) double duration;
@property (nonatomic) unsigned long long indexableAttachments;
@property (nonatomic) unsigned long long indexableMessages;
@property (nonatomic) unsigned long long messageData;
@property (nonatomic) unsigned long long messageDataDeleted;
@property (nonatomic) unsigned long long messages;
@property (nonatomic) unsigned long long messagesDeleted;
@property (nonatomic) double start;

- (unsigned long long)attachmentsIndexed;
- (unsigned long long)attachmentsToIndex;
- (double)duration;
- (unsigned long long)indexableAttachments;
- (unsigned long long)indexableMessages;
- (unsigned long long)messageData;
- (unsigned long long)messageDataDeleted;
- (unsigned long long)messages;
- (unsigned long long)messagesDeleted;
- (void)setAttachmentsIndexed:(unsigned long long)arg1;
- (void)setAttachmentsToIndex:(unsigned long long)arg1;
- (void)setDuration:(double)arg1;
- (void)setIndexableAttachments:(unsigned long long)arg1;
- (void)setIndexableMessages:(unsigned long long)arg1;
- (void)setMessageData:(unsigned long long)arg1;
- (void)setMessageDataDeleted:(unsigned long long)arg1;
- (void)setMessages:(unsigned long long)arg1;
- (void)setMessagesDeleted:(unsigned long long)arg1;
- (void)setStart:(double)arg1;
- (double)start;

@end
