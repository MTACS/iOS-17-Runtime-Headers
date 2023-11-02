
@interface AFClockAlarm : NSObject <AFClockItem, AFDictionaryConvertible, NSCopying, NSSecureCoding> {
    NSUUID * _alarmID;
    NSURL * _alarmURL;
    NSDate * _dismissedDate;
    NSDate * _firedDate;
    unsigned long long  _hour;
    bool  _isEnabled;
    bool  _isFiring;
    bool  _isSnoozed;
    NSDate * _lastModifiedDate;
    unsigned long long  _minute;
    unsigned long long  _repeatOptions;
    NSString * _title;
    unsigned long long  _type;
}

@property (nonatomic, readonly, copy) NSUUID *alarmID;
@property (nonatomic, readonly, copy) NSURL *alarmURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDate *dismissedDate;
@property (nonatomic, readonly, copy) NSDate *firedDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long hour;
@property (nonatomic, readonly) bool isEnabled;
@property (nonatomic, readonly) bool isFiring;
@property (nonatomic, readonly) bool isSnoozed;
@property (nonatomic, readonly) NSUUID *itemID;
@property (nonatomic, readonly) NSURL *itemURL;
@property (nonatomic, readonly, copy) NSDate *lastModifiedDate;
@property (nonatomic, readonly) unsigned long long minute;
@property (nonatomic, readonly) unsigned long long repeatOptions;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) unsigned long long type;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)alarmID;
- (id)alarmURL;
- (id)buildDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dismissedDate;
- (void)encodeWithCoder:(id)arg1;
- (id)firedDate;
- (unsigned long long)hash;
- (unsigned long long)hour;
- (id)init;
- (id)initWithAlarmID:(id)arg1 alarmURL:(id)arg2 isFiring:(bool)arg3 title:(id)arg4 type:(unsigned long long)arg5 hour:(unsigned long long)arg6 minute:(unsigned long long)arg7 repeatOptions:(unsigned long long)arg8 isEnabled:(bool)arg9 isSnoozed:(bool)arg10 firedDate:(id)arg11 dismissedDate:(id)arg12 lastModifiedDate:(id)arg13;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isFiring;
- (bool)isSnoozed;
- (id)itemID;
- (id)itemURL;
- (id)lastModifiedDate;
- (unsigned long long)minute;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (unsigned long long)repeatOptions;
- (id)title;
- (unsigned long long)type;

@end
