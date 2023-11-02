
@interface DNDSScheduleSettingsRecord : NSObject <DNDSBackingStoreRecord, NSCopying, NSMutableCopying> {
    NSNumber * _bedtimeBehaviorEnabledSetting;
    NSNumber * _lastUpdatedTimestamp;
    NSNumber * _scheduleEnabledSetting;
    NSNumber * _timePeriodEndTimeHour;
    NSNumber * _timePeriodEndTimeMinute;
    NSNumber * _timePeriodStartTimeHour;
    NSNumber * _timePeriodStartTimeMinute;
    NSNumber * _timePeriodWeekdays;
}

@property (nonatomic, readonly, copy) NSNumber *bedtimeBehaviorEnabledSetting;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSNumber *lastUpdatedTimestamp;
@property (nonatomic, readonly, copy) NSNumber *scheduleEnabledSetting;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSNumber *timePeriodEndTimeHour;
@property (nonatomic, readonly, copy) NSNumber *timePeriodEndTimeMinute;
@property (nonatomic, readonly, copy) NSNumber *timePeriodStartTimeHour;
@property (nonatomic, readonly, copy) NSNumber *timePeriodStartTimeMinute;
@property (nonatomic, readonly, copy) NSNumber *timePeriodWeekdays;

+ (id)_recordWithEncodedInfo:(id)arg1 error:(id*)arg2;
+ (id)migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3;
+ (id)newWithDictionaryRepresentation:(id)arg1 context:(id)arg2;
+ (id)recordForLegacyBehaviorOverride:(id)arg1 lastUpdated:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithLastUpdatedTimestamp:(id)arg1 scheduleEnabledSetting:(id)arg2 timePeriodStartTimeHour:(id)arg3 timePeriodStartTimeMinute:(id)arg4 timePeriodEndTimeHour:(id)arg5 timePeriodEndTimeMinute:(id)arg6 timePeriodWeekdays:(id)arg7 bedtimeBehaviorEnabledSetting:(id)arg8;
- (id)_initWithRecord:(id)arg1;
- (id)bedtimeBehaviorEnabledSetting;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentationWithContext:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)lastUpdatedTimestamp;
- (id)legacyBehaviorOverride;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)scheduleEnabledSetting;
- (id)timePeriodEndTimeHour;
- (id)timePeriodEndTimeMinute;
- (id)timePeriodStartTimeHour;
- (id)timePeriodStartTimeMinute;
- (id)timePeriodWeekdays;

@end
