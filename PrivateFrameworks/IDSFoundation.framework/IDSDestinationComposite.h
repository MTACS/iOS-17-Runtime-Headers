
@interface IDSDestinationComposite : IDSDestination {
    NSArray * _destinations;
}

@property (nonatomic, readonly) NSArray *destinations;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinationLightweightStatus;
- (id)destinationURIs;
- (id)destinations;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestinations:(id)arg1;

@end
