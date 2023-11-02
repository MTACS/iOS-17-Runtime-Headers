
@interface MUISearchInstantAnswersSuggestion : MUISearchSuggestion {
    SFCard * _feedbackInlineCard;
    MUISearchInstantAnswer * _instantAnswer;
    <EMCollectionItemID> * _itemID;
    EMMessageList * _messageList;
}

@property (nonatomic, readonly) SFCard *feedbackInlineCard;
@property (nonatomic, readonly) MUISearchInstantAnswer *instantAnswer;
@property (nonatomic, readonly) <EMCollectionItemID> *itemID;
@property (nonatomic, readonly) EMMessage *message;
@property (nonatomic, readonly) NSString *messageConversationID;
@property (nonatomic, readonly) EMMessageList *messageList;

- (void).cxx_destruct;
- (id)_conversationID;
- (id)category;
- (id)feedbackInlineCard;
- (id)initWithInstantAnswer:(id)arg1;
- (id)initWithMessageList:(id)arg1 itemID:(id)arg2 instantAnswer:(id)arg3;
- (id)instantAnswer;
- (id)itemID;
- (id)message;
- (id)messageConversationID;
- (id)messageList;
- (void)populateInlineCard;

@end
