
@interface TPSDiscoverabilityUsageEvent : NSObject {
    NSString * _bundleIdentifier;
    NSString * _contentIdentifier;
    NSString * _context;
    NSDate * _date;
    unsigned long long  _displayType;
    NSArray * _eligibleContext;
    unsigned long long  _flags;
    long long  _ineligibleReason;
    long long  _state;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *contentIdentifier;
@property (nonatomic, copy) NSString *context;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic) unsigned long long displayType;
@property (nonatomic, copy) NSArray *eligibleContext;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) long long ineligibleReason;
@property (nonatomic) long long state;

+ (id)_eventWithContentIdentifier:(id)arg1 bundleIdentifier:(id)arg2 displayType:(unsigned long long)arg3 eligibleContext:(id)arg4 context:(id)arg5 state:(long long)arg6 date:(id)arg7;
+ (id)contentViewedEventWithContentIdentifer:(id)arg1 bundleIdentifier:(id)arg2 type:(unsigned long long)arg3 date:(id)arg4;
+ (id)eligibleEventWithContentIdentifer:(id)arg1 bundleIdentifier:(id)arg2 type:(unsigned long long)arg3 eligibleContext:(id)arg4 date:(id)arg5;
+ (id)eligibleEventWithContentIdentifer:(id)arg1 bundleIdentifier:(id)arg2 type:(unsigned long long)arg3 flags:(unsigned long long)arg4 eligibleContext:(id)arg5 date:(id)arg6;
+ (id)hintDisplayedEventWithContentIdentifer:(id)arg1 bundleIdentifier:(id)arg2 type:(unsigned long long)arg3 context:(id)arg4 date:(id)arg5;
+ (id)hintDisplayedEventWithContentIdentifer:(id)arg1 bundleIdentifier:(id)arg2 type:(unsigned long long)arg3 flags:(unsigned long long)arg4 context:(id)arg5 date:(id)arg6;
+ (id)ineligibleEventWithContentIdentifer:(id)arg1 bundleIdentifier:(id)arg2 type:(unsigned long long)arg3 context:(id)arg4 reason:(long long)arg5 date:(id)arg6;
+ (id)performedOutcomeEventWithContentIdentifer:(id)arg1 bundleIdentifier:(id)arg2 type:(unsigned long long)arg3 context:(id)arg4 date:(id)arg5;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)contentIdentifier;
- (id)context;
- (id)date;
- (id)debugDescription;
- (unsigned long long)displayType;
- (id)eligibleContext;
- (unsigned long long)flags;
- (long long)ineligibleReason;
- (id)initWithContentIdentifier:(id)arg1 bundleIdentifier:(id)arg2 displayType:(unsigned long long)arg3 eligibleContext:(id)arg4 context:(id)arg5 state:(long long)arg6 date:(id)arg7;
- (void)setBundleIdentifier:(id)arg1;
- (void)setContentIdentifier:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDisplayType:(unsigned long long)arg1;
- (void)setEligibleContext:(id)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setIneligibleReason:(long long)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end
