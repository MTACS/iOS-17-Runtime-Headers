
@interface INCancelRideIntent : INIntent {
    NSString * _rideIdentifier;
}

@property (nonatomic, readonly, copy) NSString *rideIdentifier;

+ (id)intentDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRideIdentifier:(id)arg1;
- (id)rideIdentifier;

@end
