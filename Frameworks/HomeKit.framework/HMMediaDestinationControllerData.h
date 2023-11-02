
@interface HMMediaDestinationControllerData : NSObject <HMEProtoBufferCoding, HMFLogging, HMFObject, NSCopying, NSMutableCopying, NSSecureCoding> {
    NSArray * _availableDestinationIdentifiers;
    NSUUID * _destinationIdentifier;
    NSUUID * _identifier;
    NSUUID * _parentIdentifier;
    unsigned long long  _supportedOptions;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (copy) NSArray *availableDestinationIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSUUID *destinationIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) NSUUID *parentIdentifier;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property unsigned long long supportedOptions;

+ (id)logCategory;
+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)availableDestinationIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinationIdentifier;
- (id)encodeToProtoBufferData;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 parentIdentifier:(id)arg2 destinationIdentifier:(id)arg3 supportedOptions:(unsigned long long)arg4 availableDestinationIdentifiers:(id)arg5;
- (id)initWithProtoBufferData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)logIdentifier;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)parentIdentifier;
- (id)privateDescription;
- (void)setAvailableDestinationIdentifiers:(id)arg1;
- (void)setDestinationIdentifier:(id)arg1;
- (void)setSupportedOptions:(unsigned long long)arg1;
- (id)shortDescription;
- (unsigned long long)supportedOptions;

@end
