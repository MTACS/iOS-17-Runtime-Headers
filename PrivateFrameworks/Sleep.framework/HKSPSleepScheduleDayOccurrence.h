
@interface HKSPSleepScheduleDayOccurrence : NSObject <HKSPDictionarySerializable, HKSPObject, NAEquatable, NAHashable> {
    HKSPAlarmConfiguration * _alarmConfiguration;
    NSDateComponents * _bedtimeComponents;
    unsigned long long  _version;
    NSDateComponents * _wakeUpComponents;
}

@property (nonatomic, readonly) HKSPAlarmConfiguration *alarmConfiguration;
@property (nonatomic, readonly, copy) NSDateComponents *bedtimeComponents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *groupingIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDate *lastModifiedDate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long version;
@property (nonatomic, readonly, copy) NSDateComponents *wakeUpComponents;

+ (id)allProperties;
+ (id)innerClasses;
+ (id)propertiesForEquivalence;
+ (id)significantProperties;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_decodeComponentsForPersistenceWithCoder:(id)arg1 key:(id)arg2;
- (void)_encodeComponentsForPersistence:(id)arg1 coder:(id)arg2 key:(id)arg3;
- (id)alarmConfiguration;
- (id)bedtimeComponents;
- (id)changesFromOccurrence:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)generateSleepScheduleOccurrenceWithWeekdays:(unsigned long long)arg1;
- (id)groupingIdentifier;
- (unsigned long long)hash;
- (id)init;
- (id)initFromObject:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isAlarmEquivalentToOccurrenceIgnoringDates:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentTo:(id)arg1;
- (bool)isEquivalentToOccurrenceIgnoringDates:(id)arg1;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (unsigned long long)version;
- (id)wakeUpComponents;

@end
