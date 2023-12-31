
@interface HMDCloudLegacyHomeDataRecord : HMDCloudRecord

@property (nonatomic, retain) NSData *dataVersion2;

+ (id)legacyModelWithHomeDataV0:(id)arg1 homeDataV2:(id)arg2;

- (void)clearData;
- (id)data;
- (id)dataVersion2;
- (bool)encodeObjectChange:(id)arg1;
- (id)extractObjectChange;
- (unsigned long long)objectEncoding;
- (id)recordType;
- (void)setData:(id)arg1;
- (void)setDataVersion2:(id)arg1;

@end
