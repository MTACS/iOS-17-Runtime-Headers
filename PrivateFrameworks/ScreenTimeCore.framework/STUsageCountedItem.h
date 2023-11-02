
@interface STUsageCountedItem : NSManagedObject

@property (nonatomic, readonly) STUsageBlock *block;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) long long numberOfNotifications;
@property (nonatomic, readonly) long long numberOfPickups;
@property (nonatomic, readonly) bool usageTrusted;

+ (id)notificationItemsExcludingSystemHiddenApplications:(id)arg1;
+ (id)pickupItemsExcludingSystemHiddenApplications:(id)arg1;

@end
