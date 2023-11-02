
@interface AFClockAlarmSnapshot : NSObject <AFContextSnapshot, AFDictionaryConvertible, NSCopying, NSSecureCoding> {
    NSDictionary * _alarmsByID;
    NSDate * _date;
    unsigned long long  _generation;
    NSOrderedSet * _notifiedFiringAlarmIDs;
}

@property (nonatomic, readonly, copy) NSDictionary *alarmsByID;
@property (nonatomic, readonly, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long generation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSOrderedSet *notifiedFiringAlarmIDs;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)ad_shortDescription;
- (id)alarmsByID;
- (id)buildDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)firingAlarms;
- (unsigned long long)generation;
- (bool)hasFiringAlarms;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithGeneration:(unsigned long long)arg1 date:(id)arg2 alarmsByID:(id)arg3 notifiedFiringAlarmIDs:(id)arg4;
- (id)initWithSerializedBackingStore:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mostRecentFiringAlarm;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (id)notifiedFiringAlarmIDs;
- (id)serializedBackingStore;

// Image: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX

- (id)svx_notifiedFiringAlarms;

@end
