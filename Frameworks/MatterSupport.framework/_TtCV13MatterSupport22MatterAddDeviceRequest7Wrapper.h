
@interface _TtCV13MatterSupport22MatterAddDeviceRequest7Wrapper : NSObject <MTDeviceSetupRequestSwiftWrapper> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  wrappedRequest;
}

@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *ecosystemName;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSData *serializedAsData;
@property (nonatomic, readonly) MTRSetupPayload *setupPayload;
@property (nonatomic, readonly) bool shouldScanNetworks;
@property (nonatomic, readonly) MTSDeviceSetupTopology *topology;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)ecosystemName;
- (long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)serializedAsData;
- (id)setupPayload;
- (bool)shouldScanNetworks;
- (bool)shouldShowDeviceWithUUID:(id)arg1 vendorID:(id)arg2 productID:(id)arg3 serialNumber:(id)arg4 rootPublicKey:(id)arg5 nodeID:(id)arg6;
- (id)topology;

@end
