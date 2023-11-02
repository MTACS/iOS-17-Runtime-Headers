
@interface IMInlineReplyChatItemRules : IMTranscriptChatItemRules <IMChatItemRules> {
    NSString * _threadIdentifier;
    NSString * _threadOriginatorMessageGUID;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _threadOriginatorRange;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *threadIdentifier;
@property (nonatomic, copy) NSString *threadOriginatorMessageGUID;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } threadOriginatorRange;

- (void).cxx_destruct;
- (id)_chatItemsWithReplyCountsForNewChatItems:(id)arg1 messageItem:(id)arg2;
- (id)_filteredChatItemsForNewChatItems:(id)arg1;
- (bool)_hasEarlierMessagesToLoad;
- (bool)_hasRecentMessagesToLoad;
- (bool)_shouldAppendReplyContextForItem:(id)arg1 previousItem:(id)arg2 chatStyle:(unsigned char)arg3;
- (bool)_shouldAppendReplyCountIfNeeded;
- (bool)_shouldAppendServiceForItem:(id)arg1 previousItem:(id)arg2 chatStyle:(unsigned char)arg3;
- (bool)_shouldShowReportSpamForChat:(id)arg1 withItems:(id)arg2;
- (bool)_supportsContiguousChatItems;
- (id)initWithChat:(id)arg1 threadIdentifier:(id)arg2;
- (void)setThreadIdentifier:(id)arg1;
- (void)setThreadOriginatorMessageGUID:(id)arg1;
- (void)setThreadOriginatorRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)threadIdentifier;
- (id)threadOriginatorMessageGUID;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })threadOriginatorRange;

@end
