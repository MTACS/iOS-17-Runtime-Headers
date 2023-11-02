
@interface SGReminder : SGObject <NSSecureCoding> {
    NSString * _contactIdentifier;
    NSDate * _creationDate;
    NSDateComponents * _dueDateComponents;
    SGLocation * _dueLocation;
    unsigned char  _dueLocationTrigger;
    unsigned char  _dueLocationType;
    NSString * _opaqueKey;
    unsigned char  _reminderStatus;
    NSURL * _sourceURL;
    NSString * _title;
    NSString * _uniqueKey;
}

@property (nonatomic, readonly) NSString *contactIdentifier;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSDateComponents *dueDateComponents;
@property (nonatomic, readonly) SGLocation *dueLocation;
@property (nonatomic, readonly) unsigned char dueLocationTrigger;
@property (nonatomic, readonly) unsigned char dueLocationType;
@property (nonatomic, readonly) NSString *opaqueKey;
@property (nonatomic, readonly) unsigned char reminderStatus;
@property (nonatomic, readonly) NSURL *sourceURL;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *uniqueKey;

+ (id)describeReminderDueLocationTrigger:(unsigned char)arg1;
+ (id)describeReminderDueLocationType:(unsigned char)arg1;
+ (id)describeReminderStatus:(unsigned char)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contactIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dueDateComponents;
- (id)dueLocation;
- (unsigned char)dueLocationTrigger;
- (unsigned char)dueLocationType;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordId:(id)arg1 origin:(id)arg2 title:(id)arg3 dueDateComponents:(id)arg4 dueLocationType:(unsigned char)arg5 dueLocation:(id)arg6 dueLocationTrigger:(unsigned char)arg7 sourceURL:(id)arg8 reminderStatus:(unsigned char)arg9 opaqueKey:(id)arg10 uniqueKey:(id)arg11 contactIdentifier:(id)arg12 creationDate:(id)arg13;
- (bool)isAllDay;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToReminder:(id)arg1;
- (id)loggingIdentifier;
- (id)opaqueKey;
- (unsigned char)reminderStatus;
- (id)sourceURL;
- (id)title;
- (id)uniqueKey;

@end
