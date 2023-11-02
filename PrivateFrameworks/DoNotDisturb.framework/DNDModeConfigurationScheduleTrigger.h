
@interface DNDModeConfigurationScheduleTrigger : DNDModeConfigurationTrigger {
    NSDate * _creationDate;
    NSDate * _creationdate;
    DNDScheduleTimePeriod * _timePeriod;
}

@property (nonatomic, readonly, copy) NSDate *creationDate;
@property (nonatomic, readonly, copy) DNDScheduleTimePeriod *timePeriod;

// Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb

+ (id)defaultScheduleTrigger;
+ (bool)supportsSecureCoding;
+ (id)triggerWithClientTrigger:(id)arg1 creationDate:(id)arg2;

- (void).cxx_destruct;
- (id)creationDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimePeriod:(id)arg1 creationDate:(id)arg2 enabledSetting:(unsigned long long)arg3;
- (id)initWithTimePeriod:(id)arg1 enabledSetting:(unsigned long long)arg2;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (id)timePeriod;

// Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer

+ (id)newWithDictionaryRepresentation:(id)arg1 context:(id)arg2;

- (id)dictionaryRepresentationWithContext:(id)arg1;

@end
