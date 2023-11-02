
@interface WFRemoteQuarantineAsset : NSObject <WFCloudKitItem> {
    WFFileRepresentation * _assetDataFile;
    long long  _compatibilityVersion;
    NSString * _configuration;
    long long  _contentVersion;
    CKRecordID * identifier;
}

@property (nonatomic, retain) WFFileRepresentation *assetDataFile;
@property (nonatomic) long long compatibilityVersion;
@property (nonatomic, copy) NSString *configuration;
@property (nonatomic) long long contentVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CKRecordID *identifier;
@property (nonatomic, copy) NSData *recordSystemFieldsData;
@property (readonly) Class superclass;

+ (id)properties;
+ (id)recordType;

- (void).cxx_destruct;
- (id)assetDataFile;
- (long long)compatibilityVersion;
- (id)configuration;
- (long long)contentVersion;
- (id)identifier;
- (void)setAssetDataFile:(id)arg1;
- (void)setCompatibilityVersion:(long long)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setContentVersion:(long long)arg1;

@end
