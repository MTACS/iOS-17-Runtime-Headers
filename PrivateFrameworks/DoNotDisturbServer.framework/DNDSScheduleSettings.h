
@interface DNDSScheduleSettings : DNDScheduleSettings {
    NSDate * _creationDate;
}

@property (nonatomic, readonly, copy) NSDate *creationDate;

+ (id)defaultScheduleSettings;
+ (id)settingsForRecord:(id)arg1;
+ (id)settingsWithClientSettings:(id)arg1 creationDate:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (Class)classForCoder;
- (id)creationDate;
- (id)description;
- (unsigned long long)hash;
- (id)initWithScheduleEnabledSetting:(unsigned long long)arg1 timePeriod:(id)arg2 bedtimeBehaviorEnabledSetting:(unsigned long long)arg3 creationDate:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)makeRecord;
- (id)replacementObjectForCoder:(id)arg1;

@end
