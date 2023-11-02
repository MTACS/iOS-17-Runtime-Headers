
@interface MSMessageListItemSelection : NSObject {
    bool  _isSelectAll;
    NSArray * _mailboxes;
    NSArray * _messageListItems;
}

@property (nonatomic, readonly) bool isSelectAll;
@property (nonatomic, readonly) NSArray *mailboxes;
@property (nonatomic, readonly) NSArray *messageListItems;

- (void).cxx_destruct;
- (id)initWithMailboxes:(id)arg1 excludedMessageListItems:(id)arg2;
- (id)initWithMessageListItems:(id)arg1;
- (bool)isSelectAll;
- (id)mailboxes;
- (id)messageListItems;

@end
