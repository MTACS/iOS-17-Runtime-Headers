
@interface REMNSPersistentHistoryTransaction : REMChangeTransaction {
    _REMNSPersistentHistoryTransactionStorage * _storage;
}

@property (retain) _REMNSPersistentHistoryTransactionStorage *storage;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_resolveAccountID:(id)arg1;
- (id)accountID;
- (id)author;
- (id)changes;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStorage:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setStorage:(id)arg1;
- (id)storage;
- (id)storeID;
- (id)timestamp;
- (id)token;

@end
