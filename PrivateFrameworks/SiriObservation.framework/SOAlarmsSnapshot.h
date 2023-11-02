
@interface SOAlarmsSnapshot : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _alarmsByID;
    NSDate * _date;
    NSOrderedSet * _dismissedAlarmIDs;
    NSOrderedSet * _firingAlarmIDs;
}

@property (nonatomic, readonly, copy) NSDictionary *alarmsByID;
@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, readonly, copy) NSOrderedSet *dismissedAlarmIDs;
@property (nonatomic, readonly, copy) NSOrderedSet *firingAlarmIDs;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)alarmsByID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (id)dismissedAlarmIDs;
- (void)encodeWithCoder:(id)arg1;
- (id)firingAlarmIDs;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 alarmsByID:(id)arg2 firingAlarmIDs:(id)arg3 dismissedAlarmIDs:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;

@end
