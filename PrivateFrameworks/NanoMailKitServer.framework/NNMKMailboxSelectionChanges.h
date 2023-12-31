
@interface NNMKMailboxSelectionChanges : NSObject {
    NSArray * _mailboxesToDisableSync;
    NSArray * _mailboxesToReSync;
    NSArray * _mailboxesToUpdate;
}

@property (nonatomic, retain) NSArray *mailboxesToDisableSync;
@property (nonatomic, retain) NSArray *mailboxesToReSync;
@property (nonatomic, retain) NSArray *mailboxesToUpdate;

- (void).cxx_destruct;
- (id)mailboxesToDisableSync;
- (id)mailboxesToReSync;
- (id)mailboxesToUpdate;
- (void)setMailboxesToDisableSync:(id)arg1;
- (void)setMailboxesToReSync:(id)arg1;
- (void)setMailboxesToUpdate:(id)arg1;

@end
