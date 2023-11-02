
@interface MFMessageAttachmentMigrator : NSObject <EFContentProtectionObserver, EFLoggable> {
    <EFScheduler> * _backgroundMigrationScheduler;
    NSObject<OS_dispatch_queue> * _contentProtectionQueue;
    MFMailMessageLibrary * _library;
    NSConditionLock * _migrationState;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _upgradeLock;
}

@property (nonatomic, retain) <EFScheduler> *backgroundMigrationScheduler;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *contentProtectionQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) MFMailMessageLibrary *library;
@property (nonatomic, readonly) NSConditionLock *migrationState;
@property (readonly) Class superclass;

+ (id)log;
+ (bool)migrateMaildropFileForMessage:(id)arg1 mailDropMetadata:(id)arg2;

- (void).cxx_destruct;
- (bool)_checkContentProtectionState;
- (bool)_isMigratingAttachmentsOnThread;
- (bool)_messageHasAttachmentsToMigrate:(id)arg1;
- (bool)_migrateAttachmentsForMessage:(id)arg1 connection:(id)arg2;
- (void)_setMigratingAttachmentsOnThread:(bool)arg1;
- (id)backgroundMigrationScheduler;
- (id)contentProtectionQueue;
- (void)contentProtectionStateChanged:(long long)arg1 previousState:(long long)arg2;
- (id)initWithLibrary:(id)arg1;
- (id)library;
- (void)migrateAttachmentsForMessageIfNecessary:(id)arg1;
- (id)migrationState;
- (void)setBackgroundMigrationScheduler:(id)arg1;
- (void)setLibrary:(id)arg1;
- (void)startMigratingAttachments;

@end
