
@interface NSCKDatabaseMetadata : NSManagedObject

@property (nonatomic, retain) CKServerChangeToken *currentChangeToken;
@property (nonatomic, retain) NSString *databaseName;
@property (nonatomic) long long databaseScope;
@property (nonatomic, retain) NSNumber *databaseScopeNum;
@property (nonatomic) bool hasSubscription;
@property (nonatomic, retain) NSNumber *hasSubscriptionNum;
@property (nonatomic, retain) NSDate *lastFetchDate;
@property (nonatomic, retain) NSSet *recordZones;

+ (id)entityPath;

- (long long)databaseScope;
- (bool)hasSubscription;
- (void)setDatabaseScope:(long long)arg1;
- (void)setHasSubscription:(bool)arg1;

@end
