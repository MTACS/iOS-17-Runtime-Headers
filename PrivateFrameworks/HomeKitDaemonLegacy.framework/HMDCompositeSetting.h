
@interface HMDCompositeSetting : HMFObject <HMDCompositeSettingIsEqualValueImplementing, HMFLogging> {
    HMFVersion * _readVersion;
    HMFVersion * _writeVersion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) HMFVersion *readVersion;
@property (readonly) Class superclass;
@property (readonly, copy) HMFVersion *writeVersion;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithReadVersion:(id)arg1 writeVersion:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualValue:(id)arg1;
- (id)readVersion;
- (id)writeVersion;

@end
