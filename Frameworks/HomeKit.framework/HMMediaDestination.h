
@interface HMMediaDestination : NSObject <HMEProtoBufferCoding, HMFLogging, HMFObject, NSCopying, NSMutableCopying, NSSecureCoding> {
    NSUUID * _audioGroupIdentifier;
    NSUUID * _parentIdentifier;
    unsigned long long  _supportedOptions;
    NSUUID * _uniqueIdentifier;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (copy) NSUUID *audioGroupIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSUUID *parentIdentifier;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property unsigned long long supportedOptions;
@property (readonly, copy) NSUUID *uniqueIdentifier;

+ (id)logCategory;
+ (id)payloadForDestination:(id)arg1 options:(unsigned long long)arg2;
+ (id)payloadForNullDestination;
+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptionForAudioGroupIdentifier;
- (id)attributeDescriptions;
- (id)audioGroupIdentifier;
- (bool)containsHomeTheaterSupportedOptions;
- (bool)containsMediaSystemSupportedOptions;
- (bool)containsSupportedOptions:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)encodeToProtoBufferData;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtoBufferData:(id)arg1;
- (id)initWithUniqueIdentifier:(id)arg1 parentIdentifier:(id)arg2 supportedOptions:(unsigned long long)arg3;
- (id)initWithUniqueIdentifier:(id)arg1 parentIdentifier:(id)arg2 supportedOptions:(unsigned long long)arg3 audioGroupIdentifier:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)logIdentifier;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)parentIdentifier;
- (id)privateDescription;
- (void)setAudioGroupIdentifier:(id)arg1;
- (void)setSupportedOptions:(unsigned long long)arg1;
- (id)shortDescription;
- (unsigned long long)supportedOptions;
- (id)uniqueIdentifier;

@end
