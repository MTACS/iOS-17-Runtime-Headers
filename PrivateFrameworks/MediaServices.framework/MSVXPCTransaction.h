
@interface MSVXPCTransaction : NSObject {
    NSUUID * _identifier;
    NSString * _name;
    NSObject<OS_os_transaction> * _transaction;
    long long  _transactionCount;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic, readonly) NSString *name;

+ (id)activeTransactions;

- (void).cxx_destruct;
- (void)beginTransaction;
- (id)description;
- (void)endTransaction;
- (void)endTransactionOnDate:(id)arg1;
- (id)initWithName:(id)arg1;
- (bool)isActive;
- (id)name;

@end
