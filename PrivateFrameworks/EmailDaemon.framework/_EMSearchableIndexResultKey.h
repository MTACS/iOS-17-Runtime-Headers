
@interface _EMSearchableIndexResultKey : NSObject {
    <EDSearchableCriterion> * _criterion;
    NSIndexSet * _mailboxIDs;
}

@property (nonatomic, retain) <EDSearchableCriterion> *criterion;
@property (nonatomic, copy) NSIndexSet *mailboxIDs;

- (void).cxx_destruct;
- (id)criterion;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mailboxIDs;
- (void)setCriterion:(id)arg1;
- (void)setMailboxIDs:(id)arg1;

@end
