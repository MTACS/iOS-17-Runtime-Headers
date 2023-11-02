
@interface IRMiLoProviderNearbyDevice : NSObject {
    NSNumber * _bleRssi;
    NSString * _deviceIdentifier;
    NSNumber * _uwbRange;
}

@property (nonatomic, retain) NSNumber *bleRssi;
@property (nonatomic, retain) NSString *deviceIdentifier;
@property (nonatomic, retain) NSNumber *uwbRange;

- (void).cxx_destruct;
- (id)bleRssi;
- (id)deviceIdentifier;
- (id)initWithMiLoPredictionDeviceDistanceIndication:(id)arg1;
- (void)setBleRssi:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setUwbRange:(id)arg1;
- (id)uwbRange;

@end
