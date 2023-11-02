
@interface CLSSchedule : CLSObject <CLSRelationable> {
    long long  _scheduleAction;
    NSDate * _scheduleDate;
    long long  _scheduleUpdateStatus;
    long long  _scheduledEntityType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long scheduleAction;
@property (nonatomic, retain) NSDate *scheduleDate;
@property (nonatomic) long long scheduleUpdateStatus;
@property (nonatomic) long long scheduledEntityType;
@property (readonly) Class superclass;

+ (id)relations;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initForObject:(id)arg1 scheduleDate:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeWithObject:(id)arg1;
- (long long)scheduleAction;
- (id)scheduleDate;
- (long long)scheduleUpdateStatus;
- (long long)scheduledEntityType;
- (void)setScheduleAction:(long long)arg1;
- (void)setScheduleDate:(id)arg1;
- (void)setScheduleUpdateStatus:(long long)arg1;
- (void)setScheduledEntityType:(long long)arg1;

@end
