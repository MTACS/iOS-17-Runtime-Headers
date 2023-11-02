
@interface MKMessageMigrator : MKMigrator {
    NSString * _accountGUID;
    struct sqlite3 { } * _database;
    NSMutableDictionary * _groups;
}

- (void).cxx_destruct;
- (bool)_import:(id)arg1;
- (bool)_performSimpleQuery:(id)arg1;
- (void)begin;
- (id)chatIDForMessage:(id)arg1 forHandleIDs:(id)arg2 withGroup:(id)arg3;
- (void)close;
- (void)commit;
- (void)dealloc;
- (void)delete;
- (void)delete:(id)arg1;
- (id)handleID:(id)arg1;
- (id)handleIDs:(id)arg1;
- (void)import;
- (void)import:(id)arg1;
- (void)importDataEncodedInJSON:(id)arg1;
- (id)init;
- (id)insertAttachment:(id)arg1 withMessage:(id)arg2;
- (id)insertChatForMessage:(id)arg1 forHandleIDs:(id)arg2 withGroup:(id)arg3;
- (id)insertHandle:(id)arg1;
- (id)insertMessage:(id)arg1 forHandleID:(id)arg2 withGroup:(id)arg3;
- (id)joinAttachment:(id)arg1 message:(id)arg2;
- (id)joinChat:(id)arg1 handle:(id)arg2;
- (id)joinChat:(id)arg1 message:(id)arg2 date:(long long)arg3;
- (void)notify;
- (void)open;
- (void)query:(id)arg1;
- (void)rollback;
- (void)updateClient;

@end
