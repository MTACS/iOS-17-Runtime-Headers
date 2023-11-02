
@interface HMDDatabaseFetchZonesResult : NSObject {
    HMBCloudZone * _cloudZone;
    HMBLocalZone * _localZone;
}

@property (readonly) HMBCloudZone *cloudZone;
@property (readonly) HMBLocalZone *localZone;

- (void).cxx_destruct;
- (id)cloudZone;
- (id)initWithLocalZone:(id)arg1 cloudZone:(id)arg2;
- (id)localZone;

@end
