
@interface IDSDestinationGroupSessionMember : IDSDestination {
    IDSURI * _URIObject;
    bool  _isLightWeight;
}

@property (nonatomic, readonly) IDSURI *URIObject;
@property (nonatomic, readonly) bool isLightWeight;
@property (nonatomic, readonly) NSString *uri;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URIObject;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinationLightweightStatus;
- (id)destinationURIs;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURI:(id)arg1;
- (id)initWithURI:(id)arg1 isLightWeight:(bool)arg2;
- (id)initWithURIObject:(id)arg1 isLightWeight:(bool)arg2;
- (bool)isDevice;
- (bool)isLightWeight;
- (id)uri;

@end
