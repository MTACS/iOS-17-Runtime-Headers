
@interface DACarKeyPrivateCrossPlatformSharingData : NSObject <NSCopying, NSSecureCoding> {
    NSString * _pairedEntityIdentifier;
    NSString * _vehicleEnteredPasscode;
}

@property (nonatomic, readonly) NSString *pairedEntityIdentifier;
@property (nonatomic, readonly) NSString *vehicleEnteredPasscode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVehicleEnteredPasscode:(id)arg1 pairedEntityIdentifier:(id)arg2;
- (id)pairedEntityIdentifier;
- (id)vehicleEnteredPasscode;

@end
