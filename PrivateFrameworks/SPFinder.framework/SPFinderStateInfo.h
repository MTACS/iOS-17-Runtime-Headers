
@interface SPFinderStateInfo : NSObject <NSSecureCoding> {
    long long  _activeCache;
    NSArray * _disabledReasonsArray;
    NSDate * _lastPublishDate;
    NSDate * _lastScheduledPublishActivityDate;
    NSDate * _lastUpdated;
    bool  _optInScreenOffScan;
    bool  _state;
}

@property (nonatomic) long long activeCache;
@property (nonatomic, readonly, copy) NSSet *disabledReasons;
@property (nonatomic, retain) NSArray *disabledReasonsArray;
@property (nonatomic, copy) NSDate *lastPublishDate;
@property (nonatomic, copy) NSDate *lastScheduledPublishActivityDate;
@property (nonatomic, copy) NSDate *lastUpdated;
@property (nonatomic) bool optInScreenOffScan;
@property (nonatomic) bool state;

+ (bool)canPublishAnonymously;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)activeCache;
- (id)description;
- (id)disabledReasons;
- (id)disabledReasonsArray;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(bool)arg1 optInScreenOffScan:(bool)arg2 lastUpdated:(id)arg3 lastPublishDate:(id)arg4 lastScheduledPublishActivityDate:(id)arg5 activeCache:(long long)arg6 disabledReasons:(id)arg7;
- (id)lastPublishDate;
- (id)lastScheduledPublishActivityDate;
- (id)lastUpdated;
- (bool)optInScreenOffScan;
- (void)setActiveCache:(long long)arg1;
- (void)setDisabledReasonsArray:(id)arg1;
- (void)setLastPublishDate:(id)arg1;
- (void)setLastScheduledPublishActivityDate:(id)arg1;
- (void)setLastUpdated:(id)arg1;
- (void)setOptInScreenOffScan:(bool)arg1;
- (void)setState:(bool)arg1;
- (bool)state;

@end
