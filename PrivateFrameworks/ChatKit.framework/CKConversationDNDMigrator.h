
@interface CKConversationDNDMigrator : NSObject

- (id)_dnd_deprecated_globalIdentifierForChat:(id)arg1;
- (void)migrateDNDInfoIfNeeded;
- (void)performDNDMigrationIfNecessary;

@end
