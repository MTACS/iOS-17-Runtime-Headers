
@interface STUsageTimedItem : NSManagedObject

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) STUsageCategory *category;
@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) long long totalTimeInSeconds;
@property (nonatomic, readonly) bool usageTrusted;

@end
