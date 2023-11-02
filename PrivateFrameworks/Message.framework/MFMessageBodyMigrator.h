
@interface MFMessageBodyMigrator : NSObject <EFLoggable> {
    <EFScheduler> * _backgroundMigrationScheduler;
    EFLazyCache * _directoryContentCache;
    MFMailMessageLibrary * _library;
    NSMutableArray * _mailboxesToCheck;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _upgradeLock;
}

@property (nonatomic, retain) <EFScheduler> *backgroundMigrationScheduler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) EFLazyCache *directoryContentCache;
@property (readonly) unsigned long long hash;
@property (nonatomic) MFMailMessageLibrary *library;
@property (nonatomic, retain) NSMutableArray *mailboxesToCheck;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (id)_directoryContentsForPath:(id)arg1;
- (id)_filesForMessage:(id)arg1;
- (id)_legacyAttachmentDataDirectoryURLForGlobalMessageID:(long long)arg1 basePath:(id)arg2 purgeable:(bool)arg3;
- (bool)_mailboxHasUnmigratedFiles:(id)arg1;
- (void)_migrateAllFilesForMailbox:(id)arg1;
- (void)_migrateDataFilesForMessage:(id)arg1;
- (id)backgroundMigrationScheduler;
- (id)directoryContentCache;
- (id)initWithLibrary:(id)arg1;
- (id)legacyAttachmentDirectoryForMessage:(id)arg1;
- (id)library;
- (id)mailboxesToCheck;
- (void)migrateBodyForMessageIfNecessary:(id)arg1;
- (void)setBackgroundMigrationScheduler:(id)arg1;
- (void)setDirectoryContentCache:(id)arg1;
- (void)setLibrary:(id)arg1;
- (void)setMailboxesToCheck:(id)arg1;
- (void)startMigratingBodies;

@end
