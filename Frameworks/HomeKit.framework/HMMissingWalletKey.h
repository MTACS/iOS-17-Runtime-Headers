
@interface HMMissingWalletKey : NSObject <HMFObject, NSCopying> {
    HMAccessory * _accessory;
    HMUser * _user;
}

@property (readonly) HMAccessory *accessory;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly) HMUser *user;

+ (id)missingWalletKeyWithValue:(id)arg1 home:(id)arg2;
+ (id)shortDescription;

- (void).cxx_destruct;
- (id)accessory;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAccessory:(id)arg1 user:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)privateDescription;
- (id)shortDescription;
- (id)user;

@end
