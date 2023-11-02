
@interface STAllowance : NSObject <NSCopying> {
    bool  _allowanceEnabled;
    unsigned long long  _behaviorType;
    NSArray * _bundleIdentifiers;
    NSArray * _categoryIdentifiers;
    NSString * _identifier;
    bool  _shouldAllowEditing;
    NSDateComponents * _time;
    NSDictionary * _timeByDay;
    NSArray * _webDomains;
}

@property bool allowanceEnabled;
@property (nonatomic) unsigned long long behaviorType;
@property (copy) NSArray *bundleIdentifiers;
@property (copy) NSArray *categoryIdentifiers;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly, copy) NSString *scheduleText;
@property (nonatomic) bool shouldAllowEditing;
@property (nonatomic, copy) NSDateComponents *time;
@property (nonatomic, copy) NSDictionary *timeByDay;
@property (nonatomic, readonly) double timeToday;
@property (copy) NSArray *webDomains;

+ (id)dateComponentsForDuration:(double)arg1;
+ (double)timeIntervalForAllowanceDateComponents:(id)arg1;

- (void).cxx_destruct;
- (bool)allowanceEnabled;
- (unsigned long long)behaviorType;
- (id)bundleIdentifiers;
- (id)categoryIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultBudgetTime;
- (id)defaultTimeByDay;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithBlueprint:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)scheduleText;
- (void)setAllowanceEnabled:(bool)arg1;
- (void)setBehaviorType:(unsigned long long)arg1;
- (void)setBundleIdentifiers:(id)arg1;
- (void)setCategoryIdentifiers:(id)arg1;
- (void)setShouldAllowEditing:(bool)arg1;
- (void)setTime:(id)arg1;
- (void)setTimeByDay:(id)arg1;
- (void)setWebDomains:(id)arg1;
- (bool)shouldAllowEditing;
- (id)time;
- (id)timeByDay;
- (double)timeToday;
- (id)webDomains;

@end
