
@interface MTRNetworkCommissioningClusterThreadInterfaceScanResultStruct : NSObject <NSCopying> {
    NSNumber * _channel;
    NSData * _extendedAddress;
    NSNumber * _extendedPanId;
    NSNumber * _lqi;
    NSString * _networkName;
    NSNumber * _panId;
    NSNumber * _rssi;
    NSNumber * _version;
}

@property (nonatomic, copy) NSNumber *channel;
@property (nonatomic, copy) NSData *extendedAddress;
@property (nonatomic, copy) NSNumber *extendedPanId;
@property (nonatomic, copy) NSNumber *lqi;
@property (nonatomic, copy) NSString *networkName;
@property (nonatomic, copy) NSNumber *panId;
@property (nonatomic, copy) NSNumber *rssi;
@property (nonatomic, copy) NSNumber *version;

- (void).cxx_destruct;
- (id)channel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)extendedAddress;
- (id)extendedPanId;
- (id)init;
- (id)lqi;
- (id)networkName;
- (id)panId;
- (id)rssi;
- (void)setChannel:(id)arg1;
- (void)setExtendedAddress:(id)arg1;
- (void)setExtendedPanId:(id)arg1;
- (void)setLqi:(id)arg1;
- (void)setNetworkName:(id)arg1;
- (void)setPanId:(id)arg1;
- (void)setRssi:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)version;

@end
