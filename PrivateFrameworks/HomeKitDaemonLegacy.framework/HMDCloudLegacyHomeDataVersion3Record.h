
@interface HMDCloudLegacyHomeDataVersion3Record : HMDCloudRecord

+ (id)legacyModelWithHomeDataV3:(id)arg1;

- (void)clearData;
- (id)data;
- (bool)encodeObjectChange:(id)arg1;
- (id)extractObjectChange;
- (unsigned long long)objectEncoding;
- (id)recordType;
- (void)setData:(id)arg1;

@end
