
@interface STSVehicleReport : NSObject <NSSecureCoding> {
    bool  _supportsSecureRanging;
    NFVehicleReport * _vehicleReport;
}

@property (nonatomic, readonly) NSArray *functionsInProgress;
@property (nonatomic, readonly) NSString *keyIdentifier;
@property (nonatomic, readonly) NSArray *supportedFunctions;
@property (nonatomic, readonly) bool supportsSecureRanging;
@property (nonatomic, retain) NFVehicleReport *vehicleReport;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)functionsInProgress;
- (id)getStatusForFunction:(id)arg1;
- (id)initVehicleReport:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isFunctionInProgress:(id)arg1;
- (bool)isFunctionSupported:(id)arg1;
- (id)keyIdentifier;
- (void)setVehicleReport:(id)arg1;
- (id)supportedFunctions;
- (bool)supportsSecureRanging;
- (id)vehicleReport;

@end
