
@interface HAP2AccessoryServerAccessoryCache : HAP2LoggingObject <NSSecureCoding> {
    NSDictionary * _accessoryCache;
    NSNumber * _metadataVersion;
    HAPBLEPeripheralInfo * _peripheralInfo;
    NSNumber * _sleepInterval;
}

@property (nonatomic, retain) NSDictionary *accessoryCache;
@property (nonatomic, readonly) NSNumber *metadataVersion;
@property (nonatomic, retain) HAPBLEPeripheralInfo *peripheralInfo;
@property (nonatomic, retain) NSNumber *sleepInterval;

+ (id)accessoryCacheForAccessories:(id)arg1;
+ (id)peripheralInfoFromMetadata:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryCache;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBLEPeripheralInfo:(id)arg1 cachedAccessories:(id)arg2 sleepInterval:(id)arg3 metadataVersion:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithMetadata:(id)arg1 discoveredAccessories:(id)arg2 sleepInterval:(id)arg3;
- (void)invalidateAccessoryCache;
- (id)metadataVersion;
- (id)peripheralInfo;
- (void)setAccessoryCache:(id)arg1;
- (void)setPeripheralInfo:(id)arg1;
- (void)setSleepInterval:(id)arg1;
- (id)sleepInterval;
- (void)updateWithMetadata:(id)arg1 discoveredAccessories:(id)arg2;

@end
