
@protocol CADBackupRestoreInterface <NSObject>

@required

- (void)CADBackupDatabaseToFileNamed:(void *)arg1 inDirectory:(void *)arg2 includeAttachments:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSSecurityScopedURLWrapper *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)CADBackupToICBU:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSSecurityScopedURLWrapper *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)CADRestoreFromDatabaseBackupFileNamed:(void *)arg1 inDirectory:(void *)arg2 includeAttachments:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSSecurityScopedURLWrapper *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, int, void*
- (void)CADRestoreFromICBU:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSSecurityScopedURLWrapper *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, int, void*

@end
