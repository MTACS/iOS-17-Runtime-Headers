
@interface EDSearchableIndexPersistenceRichLinkDatum : NSObject {
    long long  _mailboxID;
    NSString * _messagePersistentID;
    NSString * _richLinkID;
    NSString * _richLinkItemIdentifier;
    NSString * _title;
    NSString * _url;
}

@property (nonatomic) long long mailboxID;
@property (nonatomic, copy) NSString *messagePersistentID;
@property (nonatomic, copy) NSString *richLinkID;
@property (nonatomic, copy) NSString *richLinkItemIdentifier;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *url;

- (void).cxx_destruct;
- (long long)mailboxID;
- (id)messagePersistentID;
- (id)richLinkID;
- (id)richLinkItemIdentifier;
- (void)setMailboxID:(long long)arg1;
- (void)setMessagePersistentID:(id)arg1;
- (void)setRichLinkID:(id)arg1;
- (void)setRichLinkItemIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)title;
- (id)url;

@end
