
@interface NFVehicleReport : NSObject <NSSecureCoding> {
    SESVehicleReport * _vehicleReport;
}

@property (nonatomic, readonly) NSString *keyIdentifier;
@property (nonatomic, retain) SESVehicleReport *vehicleReport;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)getRKEFunctionsInProgress;
- (id)getStatusForRKEFunction:(id)arg1;
- (id)getSupportedRKEFunctions;
- (id)initWithCoder:(id)arg1;
- (id)initWithSESVehicleReport:(id)arg1;
- (bool)isRKEFunctionInProgress:(id)arg1;
- (bool)isRKEFunctionSupported:(id)arg1;
- (id)keyIdentifier;
- (void)setVehicleReport:(id)arg1;
- (id)vehicleReport;

@end
