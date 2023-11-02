
@interface EDServerMessagePersistenceFactory : NSObject {
    EDPersistenceDatabase * _database;
    EDGmailLabelPersistence * _gmailLabelPersistence;
}

@property (nonatomic, readonly) EDPersistenceDatabase *database;
@property (nonatomic, readonly) EDGmailLabelPersistence *gmailLabelPersistence;

- (void).cxx_destruct;
- (id)database;
- (id)gmailLabelPersistence;
- (id)init;
- (id)initWithDatabase:(id)arg1 gmailLabelPersistence:(id)arg2;
- (id)serverMessagePersistenceForMailboxURL:(id)arg1;

@end
