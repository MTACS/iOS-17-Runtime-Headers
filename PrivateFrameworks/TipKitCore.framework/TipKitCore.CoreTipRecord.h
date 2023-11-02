
@interface TipKitCore.CoreTipRecord : NSManagedObject

@property (nonatomic) long long actionPerformedCount;
@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic) bool cloudSyncEnabled;
@property (nonatomic, retain) _TtCC10TipKitCore7CoreTip20ConstellationContent *content;
@property (nonatomic) long long displayCount;
@property (nonatomic, copy) NSArray *displayDates;
@property (nonatomic, copy) NSSet *events;
@property (nonatomic, copy) NSString *id;
@property (nonatomic) bool ignoresDisplayFrequency;
@property (nonatomic) short invalidationReasonValue;
@property (nonatomic) bool isArchived;
@property (nonatomic, copy) NSDate *lastDisplayed;
@property (nonatomic, copy) NSDate *lastProcessedUsage;
@property (nonatomic) long long maxDisplayCount;
@property (nonatomic, copy) NSSet *rules;
@property (nonatomic) short statusValue;
@property (nonatomic, copy) NSDictionary *tipInfo;
@property (nonatomic) bool usesConstellation;
@property (nonatomic) bool usesCoreAnalytics;

+ (id)attributes;
+ (id)relationships;

- (long long)actionPerformedCount;
- (id)bundleID;
- (bool)cloudSyncEnabled;
- (long long)displayCount;
- (id)displayDates;
- (bool)ignoresDisplayFrequency;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (bool)isArchived;
- (id)lastProcessedUsage;
- (long long)maxDisplayCount;
- (bool)removeUnusedRulesWithCurrentRules:(id)arg1 updatesFromTipsd:(bool)arg2 context:(id)arg3 error:(id*)arg4;
- (void)setActionPerformedCount:(long long)arg1;
- (void)setBundleID:(id)arg1;
- (void)setCloudSyncEnabled:(bool)arg1;
- (void)setDisplayCount:(long long)arg1;
- (void)setDisplayDates:(id)arg1;
- (void)setIgnoresDisplayFrequency:(bool)arg1;
- (void)setIsArchived:(bool)arg1;
- (void)setLastProcessedUsage:(id)arg1;
- (void)setMaxDisplayCount:(long long)arg1;
- (void)setUsesConstellation:(bool)arg1;
- (void)setUsesCoreAnalytics:(bool)arg1;
- (bool)usesConstellation;
- (bool)usesCoreAnalytics;

@end
