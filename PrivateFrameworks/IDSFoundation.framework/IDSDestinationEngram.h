
@interface IDSDestinationEngram : IDSDestination {
    ENGroup * _underlyingGroup;
}

@property (nonatomic, readonly, retain) ENGroup *underlyingGroup;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinationURIs;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithENGroup:(id)arg1;
- (id)underlyingGroup;

@end
