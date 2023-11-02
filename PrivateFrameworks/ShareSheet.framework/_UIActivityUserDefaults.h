
@interface _UIActivityUserDefaults : NSObject {
    NSString * _activityDefaultsKey;
    NSUserDefaults * _underlyingUserDefaults;
}

@property (nonatomic, copy) NSString *activityDefaultsKey;
@property (nonatomic, retain) NSUserDefaults *underlyingUserDefaults;

+ (void)_migrateUserActivityOrderforKey:(id)arg1 userDefaults:(id)arg2 defaultOrder:(id)arg3;
+ (id)builtinActivityOrder;
+ (void)migrateUserActivityOrderIfNecessary;
+ (id)updatedActivityIdentifiersUserOrderWithPreviousOrder:(id)arg1 someSortedActivityIdentifiers:(id)arg2;

- (void).cxx_destruct;
- (void)_userEditedActivityDefaults;
- (id)activitiesBySortingActivities:(id)arg1 byIdentifierWithDefaultActivityIdentifierOrdering:(id)arg2;
- (id)activitiesOrderedByUserActivityOrderForActivities:(id)arg1;
- (id)activityDefaultsKey;
- (id)activityIdentifiersInUserOrder;
- (bool)activityIsHidden:(id)arg1;
- (id)applicationExtensionForActivity:(id)arg1;
- (bool)canHideActivity:(id)arg1;
- (bool)hasUserEditedActivityOrder;
- (id)identifierForActivity:(id)arg1;
- (id)initWithUnderlyingUserDefaults:(id)arg1 activityDefaultsKey:(id)arg2;
- (id)migrateSortOrderIfNeededForBuiltInActivityType:(id)arg1 activityIdentifierOrdering:(id)arg2;
- (id)mutableActivityIdentifiersArrayForActivitiesArray:(id)arg1;
- (void)postActivityUserDefaultsDidChangeNotification;
- (void)removeActivityTypeFromDefaults:(id)arg1;
- (void)setActivity:(id)arg1 asHidden:(bool)arg2;
- (void)setActivityDefaultsKey:(id)arg1;
- (void)setActivityIdentifiersInUserOrder:(id)arg1;
- (void)setUnderlyingUserDefaults:(id)arg1;
- (id)underlyingUserDefaults;
- (void)updateUserActivityOrderWithOrderedPartialActivities:(id)arg1;

@end
