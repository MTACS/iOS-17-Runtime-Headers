
@interface HMBCloudZoneStateModel : HMBCloudStateModel {
    HMBCloudZone * _cloudZone;
    HMBCloudZoneRebuilderStatus * _rebuilderStatus;
}

@property HMBCloudZone *cloudZone;
@property (nonatomic, retain) NSNumber *needsZoneCreation;
@property (nonatomic, retain) NSNumber *needsZoneDeletion;
@property (nonatomic, retain) HMBCloudZoneRebuilderStatus *rebuilderStatus;
@property (nonatomic, retain) NSSet *subscriptions;
@property (nonatomic, retain) NSData *subscriptionsData;
@property (nonatomic, retain) HMBCloudZoneID *zoneID;

+ (id)hmbProperties;

- (void).cxx_destruct;
- (id)cloudZone;
- (id)initWithModelID:(id)arg1 parentModelID:(id)arg2;
- (id)rebuilderStatus;
- (void)setCloudZone:(id)arg1;
- (void)setRebuilderStatus:(id)arg1;
- (void)setSubscriptions:(id)arg1;
- (id)subscriptions;

@end
