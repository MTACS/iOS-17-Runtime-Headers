
@interface PKDiscoverySpacerShelf : PKDiscoveryShelf {
    long long  _spacerType;
}

@property (nonatomic, readonly) long long spacerType;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)spacerType;

@end
