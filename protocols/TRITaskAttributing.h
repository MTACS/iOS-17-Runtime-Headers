
@protocol TRITaskAttributing <NSObject>

@required

- (NSString *)applicationBundleIdentifier;
- (TRIPersistedTaskAttribution *)asPersistedTaskAttribution;
- (TRIDownloadOptions *)networkOptions;
- (NSString *)teamIdentifier;
- (int)triCloudKitContainer;

@end
