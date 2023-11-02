
@interface IDSDestinationDefaultPairedDevice : IDSDestination

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinationURIs;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToIDSDestinationDefaultPairedDevice:(id)arg1;

@end
