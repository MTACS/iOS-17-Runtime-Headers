
@interface HMAccessorySetupRequest : NSObject <HMFObject, NSCopying, NSSecureCoding> {
    NSUUID * _homeUniqueIdentifier;
    MTRSetupPayload * _matterPayload;
    HMAccessorySetupPayload * _payload;
    NSString * _suggestedAccessoryName;
    NSUUID * _suggestedRoomUniqueIdentifier;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) NSUUID *homeUniqueIdentifier;
@property (retain) MTRSetupPayload *matterPayload;
@property (copy) HMAccessorySetupPayload *payload;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (copy) NSString *suggestedAccessoryName;
@property (copy) NSUUID *suggestedRoomUniqueIdentifier;
@property (readonly) Class superclass;

+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)homeUniqueIdentifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)matterPayload;
- (id)payload;
- (id)privateDescription;
- (void)setHomeUniqueIdentifier:(id)arg1;
- (void)setMatterPayload:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setSuggestedAccessoryName:(id)arg1;
- (void)setSuggestedRoomUniqueIdentifier:(id)arg1;
- (id)shortDescription;
- (id)suggestedAccessoryName;
- (id)suggestedRoomUniqueIdentifier;

@end
