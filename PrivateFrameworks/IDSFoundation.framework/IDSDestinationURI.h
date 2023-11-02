
@interface IDSDestinationURI : IDSDestination {
    IDSURI * _uri;
}

@property (nonatomic, readonly) IDSURI *uri;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinationLightweightStatus;
- (id)destinationURIs;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURI:(id)arg1;
- (id)initWithURIString:(id)arg1;
- (id)uri;

@end
