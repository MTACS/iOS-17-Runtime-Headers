
@interface JetEngine.JSHostObject : NSObject <_TtP9JetEngineP33_3B280445E2AC6E2542A3DCC2FD82BB2C19JSHostObjectExports_>

@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) NSString *clientVersion;
@property (nonatomic, readonly) NSString *deviceLocalizedModel;
@property (nonatomic, readonly) NSString *deviceModel;
@property (nonatomic, readonly) NSString *deviceModelFamily;
@property (nonatomic, readonly) NSString *devicePhysicalModel;
@property (nonatomic, readonly) NSString *osBuild;
@property (nonatomic, readonly) NSString *platform;

- (id)clientIdentifier;
- (id)clientVersion;
- (id)deviceLocalizedModel;
- (id)deviceModel;
- (id)deviceModelFamily;
- (id)devicePhysicalModel;
- (id)init;
- (bool)isOSAtLeast:(id)arg1 :(id)arg2 :(id)arg3;
- (id)osBuild;
- (id)platform;

@end
