
@interface WiFiUsageLQMTriggerCriteria : NSObject <NSCopying> {
    NSString * _bssid;
    NSDate * _currentSample;
    NSString * _filterCriteria;
    NSDate * _firstTriggered;
    NSDate * _lastTriggered;
    bool  _matched;
    NSPredicate * _predicate;
    NSPredicate * _requiredFieldsValid;
    unsigned long long  _type;
    bool  _valid;
}

@property (nonatomic, retain) NSString *bssid;
@property (nonatomic, retain) NSDate *currentSample;
@property (nonatomic, retain) NSString *filterCriteria;
@property (nonatomic, retain) NSDate *firstTriggered;
@property (nonatomic, retain) NSDate *lastTriggered;
@property (nonatomic) bool matched;
@property (nonatomic, retain) NSPredicate *predicate;
@property (nonatomic, retain) NSPredicate *requiredFieldsValid;
@property (nonatomic) unsigned long long type;
@property (nonatomic) bool valid;

+ (id)dataTriggeredTypes;
+ (id)parseCriteria:(id)arg1 intoRequiredFields:(id)arg2 andFeatures:(id)arg3 forFields:(id)arg4 withType:(id)arg5 isFilter:(bool)arg6;
+ (id)predicateNoQuotes:(id)arg1;

- (void).cxx_destruct;
- (id)bssid;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentSample;
- (id)description;
- (id)filterCriteria;
- (id)firstTriggered;
- (id)initWith:(id)arg1 forFields:(id)arg2 andFeatures:(id)arg3;
- (id)lastTriggered;
- (bool)matched;
- (id)predicate;
- (id)redactedDescription;
- (id)requiredFieldsValid;
- (void)setBssid:(id)arg1;
- (void)setCurrentSample:(id)arg1;
- (void)setFilterCriteria:(id)arg1;
- (void)setFirstTriggered:(id)arg1;
- (void)setLastTriggered:(id)arg1;
- (void)setMatched:(bool)arg1;
- (void)setPredicate:(id)arg1;
- (void)setRequiredFieldsValid:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setValid:(bool)arg1;
- (id)shortPredicate;
- (id)shortPredicateNoSpaces;
- (unsigned long long)type;
- (id)typeAsString;
- (bool)valid;

@end
