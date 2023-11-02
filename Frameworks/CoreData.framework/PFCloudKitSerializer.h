
@interface PFCloudKitSerializer : NSObject {
    NSObject<PFCloudKitSerializerDelegate> * _delegate;
    NSMutableDictionary * _manyToManyRecordNameToRecord;
    PFCloudKitMetadataCache * _metadataCache;
    NSCloudKitMirroringDelegateOptions * _mirroringOptions;
    NSString * _recordNamePrefix;
    CKRecordZone * _recordZone;
    NSMutableArray * _writtenAssetURLs;
}

+ (void)_invalidateStaticCaches;
+ (id)defaultRecordZoneIDForDatabaseScope:(long long)arg1;
+ (void)initialize;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithMirroringOptions:(id)arg1 metadataCache:(id)arg2 recordNamePrefix:(id)arg3;

@end
