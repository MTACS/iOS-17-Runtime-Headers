
@interface STUsageBlock : NSManagedObject

@property (nonatomic, retain) NSSet *categories;
@property (nonatomic, retain) NSSet *countedItems;
@property (nonatomic) long long durationInMinutes;
@property (nonatomic, retain) NSDate *firstPickupDate;
@property (nonatomic, retain) NSDate *lastEventDate;
@property (nonatomic, retain) NSDate *longestSessionEndDate;
@property (nonatomic, retain) NSDate *longestSessionStartDate;
@property (nonatomic) long long numberOfPickupsWithoutApplicationUsage;
@property (nonatomic) long long screenTimeInSeconds;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic, retain) STUsage *usage;

+ (id)fetchRequestMatchingUsage:(id)arg1 dateInterval:(id)arg2;
+ (long long)totalNotificationsForUsageBlocks:(id)arg1;
+ (long long)totalPickupsForUsageBlocks:(id)arg1;
+ (double)totalScreenTimeForUsageBlocks:(id)arg1;
+ (id)usageCategoriesForUsageBlocks:(id)arg1;
+ (id)usageCountedItemsForUsageBlocks:(id)arg1;

@end
