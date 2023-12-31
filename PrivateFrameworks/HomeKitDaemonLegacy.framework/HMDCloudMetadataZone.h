
@interface HMDCloudMetadataZone : HMDCloudZone {
    HMDCloudRecord * _metadataRecord;
}

@property (nonatomic, retain) HMDCloudRecord *metadataRecord;

+ (void)createMetadataZoneWithName:(id)arg1 owner:(id)arg2 cacheZone:(id)arg3 cloudCache:(id)arg4 completion:(id /* block */)arg5;
+ (id)zoneRootRecordName;
+ (id)zoneSubscriptionName:(id)arg1;

- (void).cxx_destruct;
- (id)metadataRecord;
- (void)setMetadataRecord:(id)arg1;
- (void)setServerChangeToken:(id)arg1;

@end
