
@interface SGMessagePairIterator : NSObject {
    NSString * _attachmentCharacterString;
    NSString * _breadcrumbCharacterString;
    bool  _done;
    NSDate * _latestProcessedDate;
    NSMutableDictionary * _latestPromptForHandle;
    double  _maxReplyGap;
    unsigned long long  _maxReplyLength;
    unsigned long long  _messageEventCount;
    unsigned long long  _messageEventIndex;
    NSArray * _messageEvents;
}

@property (nonatomic, readonly) NSDate *latestProcessedDate;

- (void).cxx_destruct;
- (id)handleFromConversationId:(id)arg1;
- (id)initWithStartDate:(id)arg1 maxBatchSize:(unsigned long long)arg2 maxReplyLength:(unsigned long long)arg3 maxReplyGap:(double)arg4;
- (bool)isDoneIterating;
- (id)latestProcessedDate;
- (id)nextMessagePair;
- (id)removeBreadcrumbsFromMessage:(id)arg1;

@end
