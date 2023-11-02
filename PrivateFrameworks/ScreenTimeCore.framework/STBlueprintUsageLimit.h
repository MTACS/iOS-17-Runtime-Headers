
@interface STBlueprintUsageLimit : NSManagedObject <STSerializableManagedObject, STSyncableSubObject>

@property (nonatomic, copy) NSArray *applicationIdentifiers;
@property (nonatomic, readonly) STBlueprint *blueprint;
@property (nonatomic, retain) STBlueprintUsageLimitScheduleRepresentation *budgetLimitScheduleRepresentation;
@property (nonatomic, copy) NSArray *categoryIdentifiers;
@property (nonatomic, copy) NSArray *categoryIdentifiersVersion2;
@property (nonatomic) double day0Limit;
@property (nonatomic) double day1Limit;
@property (nonatomic) double day2Limit;
@property (nonatomic) double day3Limit;
@property (nonatomic) double day4Limit;
@property (nonatomic) double day5Limit;
@property (nonatomic) double day6Limit;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *itemIdentifiers;
@property (nonatomic, retain) NSNumber *notificationTimeInterval;
@property (readonly) Class superclass;
@property (readonly) <STSerializableManagedObject> *syncableRootObject;
@property (nonatomic, copy) NSString *usageItemType;
@property (nonatomic, copy) NSArray *websiteIdentifiers;

+ (id)keyPathsForValuesAffectingBudgetLimitScheduleRepresentation;
+ (id)limitKeyPaths;

- (void)_usageLimitDidChangeFromOldApplicationIdentifiers:(id)arg1 oldCategoryIdentifiers:(id)arg2 oldCategoryIdentifiersVersion2:(id)arg3 oldWebDomains:(id)arg4 oldItemIdentifiers:(id)arg5 oldItemType:(id)arg6 toNewApplicationIdentifiers:(id)arg7 newCategoryIdentifiers:(id)arg8 newCategoryIdentifiersVersion2:(id)arg9 newWebDomains:(id)arg10 newItemIdentifiers:(id)arg11 newItemType:(id)arg12;
- (void)awakeFromFetch;
- (id)budgetLimitScheduleRepresentation;
- (id)dictionaryRepresentation;
- (void)setApplicationIdentifiers:(id)arg1;
- (void)setBudgetLimit:(double)arg1;
- (void)setBudgetLimit:(double)arg1 forDay:(unsigned long long)arg2;
- (void)setBudgetLimitScheduleRepresentation:(id)arg1;
- (void)setCategoryIdentifiers:(id)arg1;
- (void)setCategoryIdentifiersVersion2:(id)arg1;
- (void)setItemIdentifiers:(id)arg1;
- (void)setUsageItemType:(id)arg1;
- (void)setWebsiteIdentifiers:(id)arg1;
- (id)syncableRootObject;
- (bool)updateWithDictionaryRepresentation:(id)arg1;

@end
