
@interface HMAccessorySetupCompletedInfo : NSObject <HMFObject, NSSecureCoding> {
    NSArray * _addedAccessoryUUIDs;
    NSString * _homeUUID;
}

@property (readonly, copy) NSArray *addedAccessoryUUIDs;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *homeUUID;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)addedAccessoryUUIDs;
- (id)attributeDescriptions;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)homeUUID;
- (id)initWithCoder:(id)arg1;
- (id)initWithHomeUUID:(id)arg1 addedAccessoryUUIDs:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)privateDescription;
- (id)shortDescription;

@end
