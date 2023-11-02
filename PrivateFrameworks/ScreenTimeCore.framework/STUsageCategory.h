
@interface STUsageCategory : NSManagedObject

@property (nonatomic, retain) STUsageBlock *block;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSSet *timedItems;
@property (nonatomic) long long totalTimeInSeconds;

+ (id)applicationAndWebItemsExcludingSystemHiddenApplications:(id)arg1;
+ (id)categoryItemsExcludingSystemCategories:(id)arg1;

@end
