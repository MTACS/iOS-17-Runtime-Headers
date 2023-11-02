
@interface CKSyncEngineFetchChangesZoneConfiguration : NSObject <CKPropertiesDescription, NSCopying> {
    bool  _shouldFetchAssetContents;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool shouldFetchAssetContents;
@property (readonly) Class superclass;

- (void)CKDescribePropertiesUsing:(id)arg1;
- (id)CKDescriptionClassName;
- (bool)CKDescriptionShouldPrintPointer;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)redactedDescription;
- (void)setShouldFetchAssetContents:(bool)arg1;
- (bool)shouldFetchAssetContents;

@end
