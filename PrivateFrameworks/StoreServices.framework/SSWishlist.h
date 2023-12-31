
@interface SSWishlist : NSObject {
    long long  _accountIdentifier;
    SSSQLiteDatabase * _database;
}

@property (nonatomic, readonly) long long accountIdentifier;
@property (nonatomic, copy) NSNumber *lastSyncTime;

+ (bool)existsForAccountIdentifier:(long long)arg1;

- (long long)accountIdentifier;
- (void)dealloc;
- (bool)deleteBackingStore;
- (id)initWithAccountIdentifier:(long long)arg1;
- (id)lastSyncTime;
- (void)performTransactionWithBlock:(id /* block */)arg1;
- (void)setLastSyncTime:(id)arg1;

@end
