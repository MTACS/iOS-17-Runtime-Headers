
@interface SPBeaconObservation : NSObject <NSSecureCoding> {
    NSUUID * _beaconIdentifier;
    NSDate * _date;
    SPObservationLocation * _location;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSUUID *beaconIdentifier;
@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, readonly, copy) SPObservationLocation *location;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)beaconIdentifier;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBeaconIdentifier:(id)arg1 type:(long long)arg2 date:(id)arg3 location:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)location;
- (long long)type;

@end
