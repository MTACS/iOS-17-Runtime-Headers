
@interface MFServerMessagePersistenceFactory_iOS : EDServerMessagePersistenceFactory {
    MFMailMessageLibrary * _library;
}

@property (nonatomic) MFMailMessageLibrary *library;

- (void).cxx_destruct;
- (id)initWithLibrary:(id)arg1 database:(id)arg2;
- (id)library;
- (long long)mailboxIDForMailboxURL:(id)arg1 useNumericSearch:(bool*)arg2 supportsLabels:(bool*)arg3;
- (void)setLibrary:(id)arg1;

@end
