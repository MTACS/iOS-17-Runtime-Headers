
@interface CKTranscriptModel : NSObject {
    NSArray * _chatItems;
    CKConversation * _conversation;
    <CKTranscriptModelDelegate> * _delegate;
    NSDictionary * _supplementaryKindToChatItemMap;
}

@property (nonatomic, retain) NSArray *chatItems;
@property (nonatomic, retain) CKConversation *conversation;
@property (nonatomic) <CKTranscriptModelDelegate> *delegate;
@property (nonatomic, readonly, copy) NSDiffableDataSourceSnapshot *snapshot;
@property (nonatomic, retain) NSDictionary *supplementaryKindToChatItemMap;

+ (id)transcriptSectionIdentifier;

- (void).cxx_destruct;
- (id)chatItemWithIMChatItem:(id)arg1 traitCollection:(id)arg2;
- (id)chatItems;
- (id)chatItemsWithIMChatItems:(id)arg1;
- (id)conversation;
- (id)delegate;
- (id)initWithConversation:(id)arg1 delegate:(id)arg2;
- (void)reload;
- (void)setChatItems:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSupplementaryKindToChatItemMap:(id)arg1;
- (id)snapshot;
- (id)supplementaryKindToChatItemMap;

@end
