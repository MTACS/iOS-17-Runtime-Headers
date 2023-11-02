
@interface MessageListFetchHelper : NSObject {
    EMFetchController * _fetchController;
    NSArray * _mailboxes;
    bool  _mailboxesNeedFetching;
}

@property (nonatomic, retain) EMFetchController *fetchController;
@property (nonatomic, copy) NSArray *mailboxes;

- (void).cxx_destruct;
- (id)fetchController;
- (bool)fetchMailboxesIsUserInitiated:(bool)arg1;
- (id)initWithFetchController:(id)arg1 mailboxes:(id)arg2;
- (id)mailboxes;
- (void)setFetchController:(id)arg1;
- (void)setMailboxes:(id)arg1;

@end
