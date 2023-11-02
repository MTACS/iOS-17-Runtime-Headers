
@interface ATXContactEntityFeatures : NSObject <ATXJSONSerializableProtocol> {
    NSNumber * _classConditionalOfNotificationsClearedForEntity;
    NSNumber * _classConditionalOfNotificationsReceivedForEntity;
    NSNumber * _globalCountOfNotificationsClearedForEntity;
    NSNumber * _globalCountOfNotificationsReceivedForEntity;
    NSNumber * _globalNotificationsClearedRateForEntity;
    NSNumber * _globalPopularityOfNotificationsReceivedForEntity;
    bool  _isEmergencyContact;
    bool  _isFavoriteContact;
    bool  _isICloudFamilyMember;
    bool  _isVIPContact;
    NSNumber * _localNotificationsClearedRateForEntity;
    NSNumber * _localPopularityOfNotificationsReceivedForEntity;
    NSNumber * _modeCountOfNotificationsClearedForEntity;
    NSNumber * _modeCountOfNotificationsReceivedForEntity;
    NSNumber * _ratioOfLocalToGlobalNotificationsClearedRateForEntity;
    NSNumber * _ratioOfLocalToGlobalPopularityOfNotificationsReceivedForEntity;
}

@property (nonatomic, retain) NSNumber *classConditionalOfNotificationsClearedForEntity;
@property (nonatomic, retain) NSNumber *classConditionalOfNotificationsReceivedForEntity;
@property (nonatomic, retain) NSNumber *globalCountOfNotificationsClearedForEntity;
@property (nonatomic, retain) NSNumber *globalCountOfNotificationsReceivedForEntity;
@property (nonatomic, retain) NSNumber *globalNotificationsClearedRateForEntity;
@property (nonatomic, retain) NSNumber *globalPopularityOfNotificationsReceivedForEntity;
@property (nonatomic) bool isEmergencyContact;
@property (nonatomic) bool isFavoriteContact;
@property (nonatomic) bool isICloudFamilyMember;
@property (nonatomic) bool isVIPContact;
@property (nonatomic, retain) NSNumber *localNotificationsClearedRateForEntity;
@property (nonatomic, retain) NSNumber *localPopularityOfNotificationsReceivedForEntity;
@property (nonatomic, retain) NSNumber *modeCountOfNotificationsClearedForEntity;
@property (nonatomic, retain) NSNumber *modeCountOfNotificationsReceivedForEntity;
@property (nonatomic, retain) NSNumber *ratioOfLocalToGlobalNotificationsClearedRateForEntity;
@property (nonatomic, retain) NSNumber *ratioOfLocalToGlobalPopularityOfNotificationsReceivedForEntity;

- (void).cxx_destruct;
- (id)classConditionalOfNotificationsClearedForEntity;
- (id)classConditionalOfNotificationsReceivedForEntity;
- (id)globalCountOfNotificationsClearedForEntity;
- (id)globalCountOfNotificationsReceivedForEntity;
- (id)globalNotificationsClearedRateForEntity;
- (id)globalPopularityOfNotificationsReceivedForEntity;
- (id)init;
- (id)initFromJSON:(id)arg1;
- (bool)isEmergencyContact;
- (bool)isFavoriteContact;
- (bool)isICloudFamilyMember;
- (bool)isVIPContact;
- (id)jsonRepresentation;
- (id)localNotificationsClearedRateForEntity;
- (id)localPopularityOfNotificationsReceivedForEntity;
- (id)modeCountOfNotificationsClearedForEntity;
- (id)modeCountOfNotificationsReceivedForEntity;
- (id)ratioOfLocalToGlobalNotificationsClearedRateForEntity;
- (id)ratioOfLocalToGlobalPopularityOfNotificationsReceivedForEntity;
- (void)setClassConditionalOfNotificationsClearedForEntity:(id)arg1;
- (void)setClassConditionalOfNotificationsReceivedForEntity:(id)arg1;
- (void)setGlobalCountOfNotificationsClearedForEntity:(id)arg1;
- (void)setGlobalCountOfNotificationsReceivedForEntity:(id)arg1;
- (void)setGlobalNotificationsClearedRateForEntity:(id)arg1;
- (void)setGlobalPopularityOfNotificationsReceivedForEntity:(id)arg1;
- (void)setIsEmergencyContact:(bool)arg1;
- (void)setIsFavoriteContact:(bool)arg1;
- (void)setIsICloudFamilyMember:(bool)arg1;
- (void)setIsVIPContact:(bool)arg1;
- (void)setLocalNotificationsClearedRateForEntity:(id)arg1;
- (void)setLocalPopularityOfNotificationsReceivedForEntity:(id)arg1;
- (void)setModeCountOfNotificationsClearedForEntity:(id)arg1;
- (void)setModeCountOfNotificationsReceivedForEntity:(id)arg1;
- (void)setRatioOfLocalToGlobalNotificationsClearedRateForEntity:(id)arg1;
- (void)setRatioOfLocalToGlobalPopularityOfNotificationsReceivedForEntity:(id)arg1;

@end
