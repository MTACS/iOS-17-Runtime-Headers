
@interface IDSPseudonym : NSObject <IDSDestinationProtocol, NSSecureCoding> {
    IDSURI * _URI;
    IDSURI * _maskedURI;
    IDSPseudonymProperties * _properties;
}

@property (nonatomic, readonly) IDSURI *URI;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) IDSURI *maskedURI;
@property (nonatomic, readonly) IDSPseudonymProperties *properties;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URI;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinationURIs;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithURI:(id)arg1 maskedURI:(id)arg2 properties:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPseudonym:(id)arg1;
- (id)maskedURI;
- (id)properties;
- (id)withUpdatedProperties:(id)arg1;

@end
