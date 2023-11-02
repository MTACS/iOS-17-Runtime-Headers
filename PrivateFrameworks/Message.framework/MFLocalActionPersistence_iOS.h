
@interface MFLocalActionPersistence_iOS : EDLocalActionPersistence {
    MFMailMessageLibrary * _library;
}

@property (nonatomic) MFMailMessageLibrary *library;

- (void).cxx_destruct;
- (void)handledFailedCopyForMessages:(id)arg1;
- (id)initWithDatabase:(id)arg1;
- (id)initWithDatabase:(id)arg1 gmailLabelPersistence:(id)arg2;
- (id)initWithLibrary:(id)arg1 database:(id)arg2;
- (id)labelNameForLabelID:(long long)arg1;
- (id)library;
- (long long)mailboxDatabaseIDForURL:(id)arg1;
- (id)mailboxURLForDatabaseID:(long long)arg1;
- (id)messageForDatabaseID:(long long)arg1;
- (bool)moveSupportedFromMailboxURL:(id)arg1 toURL:(id)arg2;
- (void)setLibrary:(id)arg1;

@end
