
@interface PKSharingDestination : NSObject <NSCopying, NSSecureCoding> {
    NSString * _destinationIdentifier;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_name;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)idsDestination;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestinationIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
