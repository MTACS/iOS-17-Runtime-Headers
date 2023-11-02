
@interface HMDHomeNFCReaderKeyModel : HMDBackingStoreModelObject

@property (nonatomic, retain) NSData *encodedNfcReaderKey;
@property (nonatomic, copy) HMDHomeNFCReaderKey *nfcReaderKey;

+ (id)defaultModelForHome:(id)arg1;
+ (id)modelIDForHome:(id)arg1;
+ (id)properties;

- (id)nfcReaderKey;
- (void)setNfcReaderKey:(id)arg1;

@end
