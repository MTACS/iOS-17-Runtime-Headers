
@protocol AKFollowUpItemFactory <NSObject>

@required

- (bool)IsFollowUpItemNotificationForced:(FLFollowUpItem *)arg1;
- (NSString *)bundleIconName;
- (NSString *)extensionIdentifier;
- (NSArray *)itemIdentifiersRequiringNotificationClearFromPayload:(NSArray *)arg1;
- (NSArray *)itemsForAltDSID:(NSString *)arg1 pushMessageInfo:(NSDictionary *)arg2 fromIDMSPayload:(NSArray *)arg3;
- (NSString *)representingBundlePath;
- (void)setBundleIconName:(NSString *)arg1;
- (void)setExtensionIdentifier:(NSString *)arg1;
- (void)setRepresentingBundlePath:(NSString *)arg1;

@end
