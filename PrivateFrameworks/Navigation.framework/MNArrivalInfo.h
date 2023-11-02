
@interface MNArrivalInfo : NSObject <NSSecureCoding> {
    long long  _arrivalState;
    GEOComposedWaypoint * _destination;
    unsigned long long  _legIndex;
    MNVehicleParkingInfo * _vehicleParkingInfo;
}

@property (nonatomic, readonly) long long arrivalState;
@property (nonatomic, readonly) GEOComposedWaypoint *destination;
@property (nonatomic, readonly) bool isInArrivalState;
@property (nonatomic, readonly) bool isInParkingState;
@property (nonatomic, readonly) unsigned long long legIndex;
@property (nonatomic, readonly) MNVehicleParkingInfo *vehicleParkingInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)arrivalState;
- (id)description;
- (id)destination;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isInArrivalState;
- (bool)isInParkingState;
- (unsigned long long)legIndex;
- (void)setArrivalState:(long long)arg1;
- (void)setDestination:(id)arg1;
- (void)setLegIndex:(unsigned long long)arg1;
- (void)setVehicleParkingInfo:(id)arg1;
- (id)vehicleParkingInfo;

@end
