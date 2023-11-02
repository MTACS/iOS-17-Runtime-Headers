
@interface MNNavigationServiceCallback_DidUpdateVehicleParkingInfo : MNNavigationServiceCallbackParameters {
    MNVehicleParkingInfo * _vehicleParkingInfo;
}

@property (nonatomic, retain) MNVehicleParkingInfo *vehicleParkingInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setVehicleParkingInfo:(id)arg1;
- (unsigned long long)type;
- (id)vehicleParkingInfo;

@end
