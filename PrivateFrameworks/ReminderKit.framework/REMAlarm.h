
@interface REMAlarm : NSObject <NSSecureCoding, REMObjectIDProviding> {
    NSDate * _acknowledgedDate;
    NSString * _alarmUID;
    REMObjectID * _objectID;
    NSString * _originalAlarmUID;
    REMAlarmTrigger * _trigger;
}

@property (nonatomic, retain) NSDate *acknowledgedDate;
@property (nonatomic, retain) NSString *alarmUID;
@property (nonatomic, retain) REMObjectID *objectID;
@property (nonatomic, retain) NSString *originalAlarmUID;
@property (nonatomic, readonly) REMObjectID *remObjectID;
@property (nonatomic, retain) REMAlarmTrigger *trigger;

+ (id)cdEntityName;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)acknowledgedDate;
- (id)alarmUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAlarm:(id)arg1 objectID:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithTrigger:(id)arg1;
- (id)initWithTrigger:(id)arg1 objectID:(id)arg2;
- (bool)isAcknowledged;
- (bool)isContentEqual:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isOriginal;
- (bool)isSnooze;
- (id)objectID;
- (id)originalAlarmUID;
- (id)remObjectID;
- (void)setAcknowledgedDate:(id)arg1;
- (void)setAlarmUID:(id)arg1;
- (void)setObjectID:(id)arg1;
- (void)setOriginalAlarmUID:(id)arg1;
- (void)setTrigger:(id)arg1;
- (id)trigger;

@end
