
@protocol UNCNotificationSourceDescription <NSObject>

@required

- (bool)allowServiceExtensionFiltering;
- (NSString *)bundleIdentifier;
- (bool)isRestricted;
- (bool)supportsContentAvailableRemoteNotifications;
- (bool)usesCloudKit;

@end
