
@protocol XBSnapshotManifestStore <NSObject>

@required

- (void)clearManifestDataForBundleIdentifier:(NSString *)arg1;
- (NSData *)loadManifestDataForBundleIdentifier:(NSString *)arg1;
- (void)persistManifestData:(NSData *)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)synchronizeForBundleIdentifier:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@optional

- (void)beginAccessBlockForBundleIdentifier:(NSString *)arg1;
- (void)endAccessBlockForBundleIdentifier:(NSString *)arg1;

@end
