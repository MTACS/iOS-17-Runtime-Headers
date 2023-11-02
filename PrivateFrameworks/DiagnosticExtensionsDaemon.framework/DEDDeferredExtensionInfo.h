
@interface DEDDeferredExtensionInfo : NSObject <DEDSecureArchiving, NSSecureCoding> {
    NSString * _activityString;
    NSString * _bugSessionIdentifier;
    DEDExtensionIdentifier * _dedIdentifier;
    double  _gracePeriod;
    NSDictionary * _parameters;
    bool  _requiresClassBDataAccess;
    bool  _scheduled;
    NSDate * _triggerDate;
}

@property (nonatomic, readonly) NSString *activityString;
@property (readonly) NSString *bugSessionIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) DEDExtensionIdentifier *dedIdentifier;
@property (readonly, copy) NSString *description;
@property (nonatomic) double gracePeriod;
@property (readonly) unsigned long long hash;
@property (retain) NSDictionary *parameters;
@property (nonatomic) bool requiresClassBDataAccess;
@property bool scheduled;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDate *triggerDate;

+ (id)activityStringForBugSessionIdentifier:(id)arg1 dedIdentifier:(id)arg2;
+ (id)allInfo;
+ (id)archivedClasses;
+ (void)checkIn;
+ (id)log;
+ (double)recommendedGracePeriodForDate:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activityString;
- (void)addToStore;
- (id)bugSessionIdentifier;
- (id)criteria;
- (id)dedIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (double)gracePeriod;
- (id)initWithBugSessionIdentifier:(id)arg1 dedIdentifier:(id)arg2 runOnDate:(id)arg3 withGracePeriod:(double)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isOverdue;
- (id)parameters;
- (void)removeFromStore;
- (bool)requiresClassBDataAccess;
- (void)run;
- (void)schedule;
- (bool)scheduled;
- (void)setGracePeriod:(double)arg1;
- (void)setParameters:(id)arg1;
- (void)setRequiresClassBDataAccess:(bool)arg1;
- (void)setScheduled:(bool)arg1;
- (void)setTriggerDate:(id)arg1;
- (id)triggerDate;
- (void)unschedule;

@end
