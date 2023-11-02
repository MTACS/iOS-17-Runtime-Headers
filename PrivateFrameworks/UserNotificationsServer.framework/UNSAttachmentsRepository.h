
@interface UNSAttachmentsRepository : NSObject {
    NSURL * _directoryURL;
    UNCBundleLibrarian * _librarian;
    UNCKeyedDictionaryRepository * _referencesRepository;
}

+ (id)_sha1HashOfFileAtURL:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)_addReferencesToRepositoryURL:(id)arg1 forNotificationIdentifier:(id)arg2 bundleIdentifier:(id)arg3;
- (id)_attachmentDirectoryForBundleIdentifier:(id)arg1;
- (id)_claimedRepositoryURLsForBundleIdentifier:(id)arg1;
- (id)_fileURLForDigestString:(id)arg1 extension:(id)arg2 bundleIdentifier:(id)arg3;
- (void)_performAttachmentFilesMigration;
- (void)_performAttachmentReferencesMigration;
- (void)_performAttachmentReferencesMigrationForBundleIdentifier:(id)arg1;
- (void)_performAttachmentRepositoryKeyMigration;
- (void)_removeAllReferencesForBundleIdentifier:(id)arg1;
- (unsigned long long)_removeReferencesToRepositoryURL:(id)arg1 forNotificationIdentifier:(id)arg2 bundleIdentifier:(id)arg3;
- (void)_removeRepositoryURL:(id)arg1;
- (void)_transformAttachmentsForBundleIdentifier:(id)arg1 usingTransformBlock:(id /* block */)arg2;
- (unsigned long long)_transformNotificationIdentifiersForRepositoryURL:(id)arg1 bundleIdentifier:(id)arg2 usingTransformBlock:(id /* block */)arg3;
- (id)allBundleIdentifiers;
- (id)bundleIdentifiersClaimingAttachments;
- (void)deleteAllFilesForBundleIdentifier:(id)arg1;
- (void)ensureIntegrityUsingNotificationIdentifiersForBundleIdentifiers:(id)arg1;
- (id)initWithDirectory:(id)arg1 librarian:(id)arg2;
- (bool)isRepositoryURL:(id)arg1;
- (bool)isValidRepositoryURL:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)moveFileIntoRepositoryFromFileURL:(id)arg1 forNotificationIdentifier:(id)arg2 bundleIdentifier:(id)arg3;
- (void)performMigration;
- (id)referencesForBundleIdentifier:(id)arg1;
- (void)removeReferenceToRepositoryURL:(id)arg1 forNotificationIdentifier:(id)arg2 bundleIdentifier:(id)arg3;

@end
