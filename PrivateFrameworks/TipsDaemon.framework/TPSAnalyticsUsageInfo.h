
@interface TPSAnalyticsUsageInfo : NSObject {
    unsigned long long  _desiredOutcomeCount;
    NSDate * _firstShownDate;
    NSString * _identifier;
    NSDate * _notifiedDate;
    bool  _overrideHoldout;
    TPSContextualDuetEvent * _usageEvent;
    NSPredicate * _usagePredicate;
}

@property (nonatomic) unsigned long long desiredOutcomeCount;
@property (nonatomic, retain) NSDate *firstShownDate;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSDate *notifiedDate;
@property (nonatomic) bool overrideHoldout;
@property (nonatomic, copy) TPSContextualDuetEvent *usageEvent;
@property (nonatomic, retain) NSPredicate *usagePredicate;

- (void).cxx_destruct;
- (unsigned long long)desiredOutcomeCount;
- (id)firstShownDate;
- (id)identifier;
- (id)notifiedDate;
- (bool)overrideHoldout;
- (void)setDesiredOutcomeCount:(unsigned long long)arg1;
- (void)setFirstShownDate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setNotifiedDate:(id)arg1;
- (void)setOverrideHoldout:(bool)arg1;
- (void)setUsageEvent:(id)arg1;
- (void)setUsagePredicate:(id)arg1;
- (id)usageEvent;
- (id)usagePredicate;

@end
