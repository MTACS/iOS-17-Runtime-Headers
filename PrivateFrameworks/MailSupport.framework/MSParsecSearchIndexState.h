
@interface MSParsecSearchIndexState : NSObject {
    long long  _indexType;
    long long  _indexedMessageCount;
    long long  _percentAttachmentsIndexed;
    long long  _percentMessagesIndexed;
    long long  _totalMessageCount;
}

@property (readonly) long long indexType;
@property (readonly) long long indexedMessageCount;
@property (readonly) long long percentAttachmentsIndexed;
@property (readonly) long long percentMessagesIndexed;
@property (readonly) long long totalMessageCount;

+ (id)indexStateForMessagesIndexed:(id)arg1 indexableMessages:(id)arg2 attachmentsIndexed:(id)arg3 indexableAttachments:(id)arg4;

- (id)description;
- (long long)indexType;
- (long long)indexedMessageCount;
- (id)initWithPercentMessagesIndexed:(long long)arg1 percentAttachmentsIndexed:(long long)arg2 totalMessageCount:(long long)arg3 indexedMessageCount:(long long)arg4 indexType:(long long)arg5;
- (long long)percentAttachmentsIndexed;
- (long long)percentMessagesIndexed;
- (long long)totalMessageCount;

@end
