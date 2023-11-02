
@interface SOAlarm : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _alarmID;
    NSURL * _alarmURL;
    unsigned long long  _hour;
    bool  _isEnabled;
    bool  _isFiring;
    unsigned long long  _minute;
    unsigned long long  _repeatSchedule;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSUUID *alarmID;
@property (nonatomic, readonly, copy) NSURL *alarmURL;
@property (nonatomic, readonly) unsigned long long hour;
@property (nonatomic, readonly) bool isEnabled;
@property (nonatomic, readonly) bool isFiring;
@property (nonatomic, readonly) unsigned long long minute;
@property (nonatomic, readonly) unsigned long long repeatSchedule;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)alarmID;
- (id)alarmURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)hour;
- (id)init;
- (id)initWithAlarmID:(id)arg1 alarmURL:(id)arg2 title:(id)arg3 hour:(unsigned long long)arg4 minute:(unsigned long long)arg5 repeatSchedule:(unsigned long long)arg6 isEnabled:(bool)arg7 isFiring:(bool)arg8;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isFiring;
- (unsigned long long)minute;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (unsigned long long)repeatSchedule;
- (id)title;

@end
