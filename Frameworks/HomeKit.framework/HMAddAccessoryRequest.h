
@interface HMAddAccessoryRequest : NSObject <HMFObject, NSSecureCoding> {
    HMAccessoryCategory * _accessoryCategory;
    HMSetupAccessoryDescription * _accessoryDescription;
    NSString * _accessoryName;
    HMHome * _home;
    NSUUID * _requestIdentifier;
    bool  _requiresOwnershipToken;
    bool  _requiresSetupPayloadURL;
}

@property (nonatomic, readonly) HMAccessoryCategory *accessoryCategory;
@property (nonatomic, retain) HMSetupAccessoryDescription *accessoryDescription;
@property (nonatomic, readonly) NSString *accessoryName;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (nonatomic, readonly) NSUUID *requestIdentifier;
@property (nonatomic, readonly) bool requiresOwnershipToken;
@property (nonatomic, readonly) bool requiresSetupPayloadURL;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryCategory;
- (id)accessoryDescription;
- (id)accessoryName;
- (id)attributeDescriptions;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)home;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 accessoryName:(id)arg2 accessoryCategory:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)payloadWithOwnershipToken:(id)arg1;
- (id)payloadWithURL:(id)arg1 ownershipToken:(id)arg2;
- (id)privateDescription;
- (id)requestIdentifier;
- (bool)requiresOwnershipToken;
- (bool)requiresSetupPayloadURL;
- (void)setAccessoryDescription:(id)arg1;
- (void)setHome:(id)arg1;
- (id)shortDescription;

@end
