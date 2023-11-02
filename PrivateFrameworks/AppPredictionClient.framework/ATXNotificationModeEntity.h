
@interface ATXNotificationModeEntity : NSObject <ATXModeEntityProtocol> {
    ATXAppModeEntity * _appEntity;
    ATXContactModeEntity * _contactEntity;
    double  _receiveTimestamp;
    ATXModeEntityScore * scoreMetadata;
}

@property (nonatomic, retain) ATXAppModeEntity *appEntity;
@property (nonatomic, retain) ATXContactModeEntity *contactEntity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double receiveTimestamp;
@property (nonatomic, retain) ATXModeEntityScore *scoreMetadata;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appEntity;
- (id)contactEntity;
- (id)contactEntityFromUserNotification:(id)arg1;
- (id)contactIdFromUserNotification:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithAppEntity:(id)arg1;
- (id)initWithAppEntity:(id)arg1 contactEntity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactEntity:(id)arg1;
- (id)initWithUNNotification:(id)arg1;
- (id)initWithUserNotification:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonDict;
- (double)receiveTimestamp;
- (id)scoreMetadata;
- (void)setAppEntity:(id)arg1;
- (void)setContactEntity:(id)arg1;
- (void)setReceiveTimestamp:(double)arg1;
- (void)setScoreMetadata:(id)arg1;

@end
