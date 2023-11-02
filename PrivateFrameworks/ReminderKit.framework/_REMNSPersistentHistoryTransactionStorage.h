
@interface _REMNSPersistentHistoryTransactionStorage : NSObject <NSSecureCoding> {
    REMObjectID * _accountID;
    NSString * _author;
    NSString * _bundleID;
    NSArray * _changes;
    NSString * _contextName;
    NSString * _processID;
    NSString * _storeID;
    NSDate * _timestamp;
    REMNSPersistentHistoryToken * _token;
    long long  _transactionNumber;
}

@property (nonatomic, copy) REMObjectID *accountID;
@property (nonatomic, copy) NSString *author;
@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, copy) NSArray *changes;
@property (nonatomic, copy) NSString *contextName;
@property (nonatomic, copy) NSString *processID;
@property (nonatomic, copy) NSString *storeID;
@property (nonatomic, copy) NSDate *timestamp;
@property (nonatomic, retain) REMNSPersistentHistoryToken *token;
@property (nonatomic) long long transactionNumber;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountID;
- (id)author;
- (id)bundleID;
- (id)changes;
- (id)contextName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)processID;
- (void)setAccountID:(id)arg1;
- (void)setAuthor:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setChanges:(id)arg1;
- (void)setContextName:(id)arg1;
- (void)setProcessID:(id)arg1;
- (void)setStoreID:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setToken:(id)arg1;
- (void)setTransactionNumber:(long long)arg1;
- (id)storeID;
- (id)timestamp;
- (id)token;
- (long long)transactionNumber;

@end
