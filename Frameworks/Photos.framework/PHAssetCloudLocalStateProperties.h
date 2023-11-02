
@interface PHAssetCloudLocalStateProperties : PHAssetPropertySet {
    unsigned short  _assetCloudLocalState;
    NSManagedObjectID * _cloudMasterObjectID;
}

@property (nonatomic, readonly) unsigned short assetCloudLocalState;
@property (nonatomic, readonly) NSManagedObjectID *cloudMasterObjectID;

+ (unsigned short)_assetCloudLocalStateFromAssetLocalState:(short)arg1 masterLocalState:(short)arg2;
+ (id)additionalPropertiesToFetchOnPrimaryObject;
+ (id)entityName;
+ (bool)inverseIsToMany;
+ (id)keyPathFromPrimaryObject;
+ (id)propertiesToFetch;
+ (id)propertySetName;

- (void).cxx_destruct;
- (unsigned short)assetCloudLocalState;
- (id)cloudMasterObjectID;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(bool)arg3;

@end
