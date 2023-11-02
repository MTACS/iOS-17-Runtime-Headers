
@interface PLAssetDescription : PLManagedObject

@property (nonatomic, retain) PLAdditionalAssetAttributes *assetAttributes;
@property (nonatomic, retain) NSString *longDescription;

+ (id)entityName;
+ (id)listOfSyncedProperties;

- (id)duplicateSortPropertyNames;
- (id)duplicateSortPropertyNamesSkip;
- (bool)isSyncableChange;
- (id)payloadForChangedKeys:(id)arg1;
- (id)payloadID;
- (void)prepareForDeletion;
- (void)willSave;

@end
