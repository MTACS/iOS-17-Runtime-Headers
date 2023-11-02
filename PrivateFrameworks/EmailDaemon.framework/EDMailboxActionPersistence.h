
@interface EDMailboxActionPersistence : NSObject {
    EDPersistenceDatabase * _database;
}

@property (nonatomic, readonly) EDPersistenceDatabase *database;

+ (id)tablesAndForeignKeysToResolve:(id*)arg1 associationsToResolve:(id*)arg2;

- (void).cxx_destruct;
- (id)allMailboxActionForAccountID:(id)arg1;
- (id)database;
- (void)deleteMailboxAction:(long long)arg1;
- (void)deleteMailboxActions:(id)arg1;
- (id)initWithDatabase:(id)arg1;
- (id)nextMailboxActionForAccountID:(id)arg1;
- (void)saveMailboxActionForAccountID:(id)arg1 action:(id)arg2;

@end
