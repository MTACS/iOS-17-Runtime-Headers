
@interface HMBModelCloudReference : HMBModelReference <HMBModelNativeCKWrapper, NSSecureCoding> {
    unsigned long long  _action;
    HMBCloudZone * _cloudZone;
    CKReference * _reference;
}

@property (nonatomic) unsigned long long action;
@property (nonatomic) HMBCloudZone *cloudZone;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CKReference *reference;
@property (readonly) Class superclass;

+ (void)applyNativeCKValue:(id)arg1 fromSource:(unsigned long long)arg2 associatingWith:(id)arg3 toModel:(id)arg4 propertyNamed:(id)arg5;
+ (id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id*)arg3;
+ (bool)includeInModelEncoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)action;
- (void)associateWithContainer:(id)arg1;
- (id)attributeDescriptions;
- (id)cloudZone;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id*)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithModelID:(id)arg1 action:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)nativeCKValueWithEncodingContext:(id)arg1 error:(id*)arg2;
- (id)reference;
- (id)referencedModelFromCloudZone:(id)arg1 allowExternalFetch:(bool)arg2;
- (void)setAction:(unsigned long long)arg1;
- (void)setCloudZone:(id)arg1;
- (void)setReference:(id)arg1;

@end
