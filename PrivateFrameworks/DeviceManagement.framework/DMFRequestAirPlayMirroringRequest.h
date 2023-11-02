
@interface DMFRequestAirPlayMirroringRequest : DMFTaskRequest {
    NSString * _destinationDeviceID;
    NSString * _destinationName;
    bool  _force;
    NSString * _password;
    double  _scanWaitInterval;
}

@property (nonatomic, copy) NSString *destinationDeviceID;
@property (nonatomic, copy) NSString *destinationName;
@property (nonatomic) bool force;
@property (nonatomic, copy) NSString *password;
@property (nonatomic) double scanWaitInterval;

+ (Class)allowlistedClassForResultObject;
+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)destinationDeviceID;
- (id)destinationName;
- (void)encodeWithCoder:(id)arg1;
- (bool)force;
- (id)initWithCoder:(id)arg1;
- (id)password;
- (double)scanWaitInterval;
- (void)setDestinationDeviceID:(id)arg1;
- (void)setDestinationName:(id)arg1;
- (void)setForce:(bool)arg1;
- (void)setPassword:(id)arg1;
- (void)setScanWaitInterval:(double)arg1;

@end
