
@interface HMDCloudHomeZone : HMDCloudZone {
    bool  _sharedHome;
}

@property (getter=isSharedHome, nonatomic, readonly) bool sharedHome;

+ (void)createHomeZoneWithName:(id)arg1 owner:(id)arg2 cacheZone:(id)arg3 cloudCache:(id)arg4 completion:(id /* block */)arg5;
+ (id)zoneRootRecordName;
+ (id)zoneSharedRootRecordName;
+ (id)zoneSubscriptionName:(id)arg1;

- (id)createCloudZoneChangeTemporaryCache:(bool)arg1;
- (id)description;
- (bool)isSharedHome;
- (void)setServerChangeToken:(id)arg1;

@end
