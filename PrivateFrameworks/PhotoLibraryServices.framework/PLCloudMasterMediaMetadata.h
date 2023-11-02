
@interface PLCloudMasterMediaMetadata : PLManagedObject

@property (nonatomic, retain) PLAdditionalAssetAttributes *additionalAssetAttributes;
@property (nonatomic, retain) PLCloudMaster *cloudMaster;
@property (nonatomic, retain) NSData *data;

+ (id)entityName;

- (void)_addPayloadIfValidForAsset:(id)arg1 changedKeys:(id)arg2 toPayloads:(id)arg3 modelProperties:(id)arg4;
- (id)payloadID;
- (id)payloadsForChangedKeys:(id)arg1;

@end
