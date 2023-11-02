
@interface HMAccessoryAccessCode : NSObject <HMFObject> {
    HMAccessCodeValue * _accessCodeValue;
    HMAccessory * _accessory;
    bool  _hasRestrictions;
    NSNumber * _uniqueIdentifier;
}

@property (readonly, copy) HMAccessCodeValue *accessCodeValue;
@property (readonly) HMAccessory *accessory;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool hasRestrictions;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly, copy) NSNumber *uniqueIdentifier;

+ (id)accessoryAccessCodeWithValue:(id)arg1 accessory:(id)arg2;
+ (id)shortDescription;

- (void).cxx_destruct;
- (id)accessCodeValue;
- (id)accessory;
- (id)attributeDescriptions;
- (id)createAccessoryAccessCodeValue;
- (id)description;
- (bool)hasRestrictions;
- (unsigned long long)hash;
- (id)initWithAccessory:(id)arg1 accessCodeValue:(id)arg2 uniqueIdentifier:(id)arg3 hasRestrictions:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (id)privateDescription;
- (id)shortDescription;
- (id)uniqueIdentifier;

@end
