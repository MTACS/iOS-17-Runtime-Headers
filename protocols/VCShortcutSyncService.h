
@protocol VCShortcutSyncService <NSObject>

@required

- (NSURL *)directoryURL;
- (void)requestFullResync;
- (void)requestSync;
- (NSString *)syncServiceIdentifier;

@end
