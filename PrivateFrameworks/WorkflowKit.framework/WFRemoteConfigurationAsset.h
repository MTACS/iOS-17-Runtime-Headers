
@interface WFRemoteConfigurationAsset : NSObject <WFCloudKitItem> {
    WFFileRepresentation * _assetDataFile;
    NSString * _assetType;
    NSNumber * _buildNumber;
    NSString * _configuration;
    NSString * _shortVersion;
    CKRecordID * identifier;
}

@property (nonatomic, retain) WFFileRepresentation *assetDataFile;
@property (nonatomic, retain) NSString *assetType;
@property (nonatomic, copy) NSNumber *buildNumber;
@property (nonatomic, copy) NSString *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CKRecordID *identifier;
@property (nonatomic, copy) NSData *recordSystemFieldsData;
@property (nonatomic, retain) NSString *shortVersion;
@property (readonly) Class superclass;

+ (id)properties;
+ (id)recordType;

- (void).cxx_destruct;
- (id)assetDataFile;
- (id)assetType;
- (id)buildNumber;
- (id)configuration;
- (id)identifier;
- (void)setAssetDataFile:(id)arg1;
- (void)setAssetType:(id)arg1;
- (void)setBuildNumber:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setShortVersion:(id)arg1;
- (id)shortVersion;

@end
