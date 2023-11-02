
@interface _EMUserActionState : NSObject {
    NSString * _cellStyle;
    EMObjectID * _key;
    EMMailboxScope * _mailboxScope;
    NSString * _messageListType;
    EMMessageObjectID * _messageObjectID;
    long long  _row;
    bool  _scrolledToEnd;
    NSDate * _viewingStarted;
}

@property (nonatomic, copy) NSString *cellStyle;
@property (nonatomic, copy) EMObjectID *key;
@property (nonatomic, retain) EMMailboxScope *mailboxScope;
@property (nonatomic, copy) NSString *messageListType;
@property (nonatomic, retain) EMMessageObjectID *messageObjectID;
@property (nonatomic) long long row;
@property (nonatomic) bool scrolledToEnd;
@property (nonatomic, retain) NSDate *viewingStarted;

- (void).cxx_destruct;
- (id)cellStyle;
- (id)key;
- (id)mailboxScope;
- (id)messageListType;
- (id)messageObjectID;
- (long long)row;
- (bool)scrolledToEnd;
- (void)setCellStyle:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setMailboxScope:(id)arg1;
- (void)setMessageListType:(id)arg1;
- (void)setMessageObjectID:(id)arg1;
- (void)setRow:(long long)arg1;
- (void)setScrolledToEnd:(bool)arg1;
- (void)setViewingStarted:(id)arg1;
- (id)viewingStarted;

@end
