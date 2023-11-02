
@interface SANotificationObject : SADomainObject

@property (nonatomic, copy) NSString *applicationId;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSNumber *dateIsAllDay;
@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic, copy) NSString *notificationId;
@property (nonatomic, copy) NSNumber *previewRestricted;
@property (nonatomic, copy) NSString *priority;
@property (nonatomic, copy) NSDate *recencyDate;
@property (nonatomic, copy) NSString *source;
@property (nonatomic, copy) NSString *threadIdentifier;
@property (nonatomic, copy) NSString *timeZoneId;
@property (nonatomic, copy) NSString *type;

+ (id)object;
+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;

- (id)applicationId;
- (id)date;
- (id)dateIsAllDay;
- (id)encodedClassName;
- (id)endDate;
- (id)groupIdentifier;
- (id)notificationId;
- (id)previewRestricted;
- (id)priority;
- (id)recencyDate;
- (void)setApplicationId:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDateIsAllDay:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setNotificationId:(id)arg1;
- (void)setPreviewRestricted:(id)arg1;
- (void)setPriority:(id)arg1;
- (void)setRecencyDate:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setThreadIdentifier:(id)arg1;
- (void)setTimeZoneId:(id)arg1;
- (void)setType:(id)arg1;
- (id)source;
- (id)threadIdentifier;
- (id)timeZoneId;
- (id)type;

@end
