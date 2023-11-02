
@interface HMBModelReference : HMFObject <HMBModelObjectCoder, HMBQueryableModelFieldCoder, NSSecureCoding> {
    NSUUID * _hmbModelID;
    HMBLocalZone * _localZone;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *hmbModelID;
@property (nonatomic) HMBLocalZone *localZone;
@property (readonly) Class superclass;

+ (id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id*)arg3;
+ (id)hmbDecodeQueryableParameter:(id)arg1;
+ (id)hmbDescriptionForEncodedQueryableVariable:(id)arg1;
+ (id)hmbEncodeQueryableParameter:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)associateWithContainer:(id)arg1;
- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id*)arg2;
- (id)hmbModelID;
- (id)initWithCoder:(id)arg1;
- (id)initWithModelID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)isValidForContainer:(id)arg1 updatedModelIDs:(id)arg2;
- (id)localZone;
- (id)referencedModelFromLocalZone:(id)arg1 error:(id*)arg2;
- (void)setLocalZone:(id)arg1;

@end
