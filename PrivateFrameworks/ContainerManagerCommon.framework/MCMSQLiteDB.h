
@interface MCMSQLiteDB : NSObject {
    struct sqlite3 { } * _db;
    <MCMSQLiteDBCodeSigningPeerageDelegate> * _peerageDelegate;
    NSObject<OS_dispatch_queue> * _queue;
    NSURL * _url;
}

@property (nonatomic) struct sqlite3 { }*db;
@property (nonatomic) <MCMSQLiteDBCodeSigningPeerageDelegate> *peerageDelegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSURL *url;

+ (bool)moveDBWithURL:(id)arg1 toURL:(id)arg2 queue:(id)arg3 error:(id*)arg4;
+ (struct sqlite3 { }*)openDBWithURL:(id)arg1 queue:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)_codeSigningEntryFromStatementRow:(struct sqlite3_stmt { }*)arg1 error:(id*)arg2;
- (bool)_deleteCodeSigningWithIdentifier:(id)arg1 error:(id*)arg2;
- (bool)_insertChildIdentifier:(id)arg1 forParentIdentifier:(id)arg2 error:(id*)arg3;
- (bool)_insertCodeSigningData:(id)arg1 forIdentifier:(id)arg2 error:(id*)arg3;
- (bool)_insertCodeSigningInfo:(id)arg1 forIdentifier:(id)arg2 error:(id*)arg3;
- (bool)_performInsertOrUpdateQuery:(const char *)arg1 withCodeSigningEntry:(id)arg2 forIdentifier:(id)arg3 isUpdate:(bool)arg4 error:(id*)arg5;
- (bool)_performSingleParameterQuery:(const char *)arg1 withTextInput:(id)arg2 error:(id*)arg3;
- (bool)_performSingleParameterQuery:(const char *)arg1 withTextInput:(id)arg2 expectedChanges:(int)arg3 error:(id*)arg4;
- (bool)_performTwoParameterQuery:(const char *)arg1 withTextInputOne:(id)arg2 andTextInputTwo:(id)arg3 expectedChanges:(int)arg4 error:(id*)arg5;
- (id)_selectCodeSigningEntryWithIdentifier:(id)arg1 error:(id*)arg2;
- (bool)_sqliteExec:(id)arg1 error:(id*)arg2;
- (bool)addCodeSigningEntry:(id)arg1 withIdentifier:(id)arg2 error:(id*)arg3;
- (id)childIdentifiersForParentIdentifier:(id)arg1 error:(id*)arg2;
- (id)childParentMapWithError:(id*)arg1;
- (void)closeDB;
- (id)codeSigningEntryWithIdentifier:(id)arg1 error:(id*)arg2;
- (struct sqlite3 { }*)db;
- (void)dealloc;
- (bool)deleteAllAdvanceCopiesOfCodeSigningEntriesWithError:(id*)arg1;
- (bool)deleteAllInvalidPluginCodeSigningEntriesWithNumChanges:(int*)arg1 error:(id*)arg2;
- (bool)deleteCodeSigningEntryWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)enumerateIdentifiersAndCodeSigningInfoUsingBlock:(id /* block */)arg1;
- (id)identifiersWithError:(id*)arg1;
- (id)initWithURL:(id)arg1 queue:(id)arg2 error:(id*)arg3;
- (bool)invalidateCodeSigningForIdentifierAndAllChildren:(id)arg1 error:(id*)arg2;
- (bool)invalidateCodeSigningWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)parentIdentifierForChildIdentifier:(id)arg1 error:(id*)arg2;
- (id)peerageDelegate;
- (id)queue;
- (void)setDb:(struct sqlite3 { }*)arg1;
- (void)setPeerageDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
