
@interface MUIResultSuggestion : MUISearchSuggestion {
    NSArray * _authorEmailAddresses;
    NSArray * _authors;
    EMMessageList * _messageList;
    EMMessageObjectID * _objectID;
}

@property (nonatomic, readonly) NSArray *authorEmailAddresses;
@property (nonatomic, readonly) NSArray *authors;
@property (nonatomic, readonly) EMMessageList *messageList;
@property (nonatomic, readonly) EMMessageObjectID *objectID;

- (void).cxx_destruct;
- (id)authorEmailAddresses;
- (id)authors;
- (id)initWithObjectID:(id)arg1 messageList:(id)arg2 authors:(id)arg3 authorEmailAddresses:(id)arg4;
- (id)messageList;
- (id)objectID;

@end
