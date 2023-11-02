
@interface SPLocationFetchResult : NSObject <NSSecureCoding> {
    NSDictionary * _locationsByBeaconIdentifier;
}

@property (nonatomic, copy) NSDictionary *locationsByBeaconIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResults:(id)arg1;
- (id)locationsByBeaconIdentifier;
- (void)setLocationsByBeaconIdentifier:(id)arg1;

@end
