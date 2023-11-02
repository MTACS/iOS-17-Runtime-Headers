
@interface MTRAccessControlClusterAccessControlTargetStruct : NSObject <NSCopying> {
    NSNumber * _cluster;
    NSNumber * _deviceType;
    NSNumber * _endpoint;
}

@property (nonatomic, copy) NSNumber *cluster;
@property (nonatomic, copy) NSNumber *deviceType;
@property (nonatomic, copy) NSNumber *endpoint;

- (void).cxx_destruct;
- (id)cluster;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceType;
- (id)endpoint;
- (id)init;
- (void)setCluster:(id)arg1;
- (void)setDeviceType:(id)arg1;
- (void)setEndpoint:(id)arg1;

@end
