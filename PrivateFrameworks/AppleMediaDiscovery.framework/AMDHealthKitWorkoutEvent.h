
@interface AMDHealthKitWorkoutEvent : AMDBaseEvent

@property (nonatomic, copy) NSString *activityType;
@property (nonatomic, copy) NSString *activityUUID;
@property (nonatomic) long long eventTime;
@property (nonatomic) short eventType;
@property (nonatomic) bool isFirstPartyDonation;
@property (nonatomic) bool isIndoor;
@property (nonatomic) bool isUpdate;

+ (id)fetchRequest;
+ (bool)validateInput:(id)arg1;

- (void)populateRecord:(id)arg1;

@end
