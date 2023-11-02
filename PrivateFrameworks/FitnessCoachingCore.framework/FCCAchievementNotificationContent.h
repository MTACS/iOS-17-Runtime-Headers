
@interface FCCAchievementNotificationContent : NSObject <FCCDataSerializable> {
    ACHAchievement * _achievement;
}

@property (nonatomic, readonly) ACHAchievement *achievement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)achievement;
- (id)initWithAchievement:(id)arg1;
- (id)initWithTransportData:(id)arg1;
- (id)transportData;

@end
