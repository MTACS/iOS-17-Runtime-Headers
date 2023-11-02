
@interface WiFiUsageLQMRollingWindow : NSObject {
    WiFiUsageInterfaceCapabilities * _capabilities;
    NSDate * _createdTimestamp;
    double  _duration;
    NSMutableSet * _features;
    NSString * _fgApp;
    NSString * _interfaceName;
    NSString * _label;
    NSString * _lastSampleBssid;
    NSMutableArray * _preceedingTriggers;
    NSMutableArray * _samples;
    NSMutableArray * _triggerCriteriaFilterList;
}

@property (nonatomic, retain) WiFiUsageInterfaceCapabilities *capabilities;
@property (nonatomic, copy) NSDate *createdTimestamp;
@property (nonatomic) double duration;
@property (nonatomic, retain) NSMutableSet *features;
@property (nonatomic, retain) NSString *fgApp;
@property (nonatomic, copy) NSString *interfaceName;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, retain) NSString *lastSampleBssid;
@property (nonatomic, readonly) NSMutableArray *preceedingTriggers;
@property (nonatomic, retain) NSMutableArray *samples;
@property (nonatomic, retain) NSMutableArray *triggerCriteriaFilterList;

+ (id)averageIntegerValueForField:(id)arg1 ScaledByDuration:(bool)arg2 OnSamples:(id)arg3;
+ (id)getValue:(id)arg1 ForField:(id)arg2 ScaledByDuration:(bool)arg3;
+ (void)initialize;
+ (id)maximumIntegerValueForField:(id)arg1 ScaledByDuration:(bool)arg2 OnSamples:(id)arg3;
+ (id)medianIntegerValueForField:(id)arg1 ScaledByDuration:(bool)arg2 OnSamples:(id)arg3;
+ (id)minimumIntegerValueForField:(id)arg1 ScaledByDuration:(bool)arg2 OnSamples:(id)arg3;
+ (id)modeValueForField:(id)arg1 ScaledByDuration:(bool)arg2 OnSamples:(id)arg3;
+ (id)modesValueForField:(id)arg1 ScaledByDuration:(bool)arg2 OnSamples:(id)arg3;
+ (id)sumIntegerValueForField:(id)arg1 ScaledByDuration:(bool)arg2 OnSamples:(id)arg3;
+ (void)updateConfig;

- (void).cxx_destruct;
- (void)addSample:(id)arg1;
- (void)addSamples:(id)arg1;
- (void)addTrigger:(id)arg1;
- (id)capabilities;
- (bool)checkCriteriaBSSIDWithSample:(id)arg1;
- (void)cleanUpStashedMedians;
- (void)clearOngoingCriteriaDates;
- (bool)configureDataTriggeredCriteria;
- (id)createdTimestamp;
- (double)duration;
- (bool)endOngoingCriteria;
- (id)evaluateCriteriaWithStopUponFirstMatch:(bool)arg1;
- (id)features;
- (id)fgApp;
- (id)getTriggerCriteriaList;
- (bool)hasChanged:(id)arg1;
- (id)initWithInterfaceName:(id)arg1;
- (id)initWithInterfaceName:(id)arg1 andDuration:(double)arg2;
- (id)interfaceName;
- (id)label;
- (id)lastSampleBssid;
- (id)preceedingTriggers;
- (id)samples;
- (void)setCapabilities:(id)arg1;
- (void)setCreatedTimestamp:(id)arg1;
- (void)setCurrentApplicationName:(id)arg1 withAttributes:(id)arg2;
- (void)setDuration:(double)arg1;
- (void)setFeatures:(id)arg1;
- (void)setFgApp:(id)arg1;
- (void)setInterfaceName:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLastSampleBssid:(id)arg1;
- (void)setSamples:(id)arg1;
- (void)setTriggerCriteriaFilterList:(id)arg1;
- (id)triggerCriteriaFilterList;
- (void)updateWindow;

@end
