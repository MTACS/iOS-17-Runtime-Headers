
@interface PHAssetSpatialMediaProperties : PHAssetPropertySet {
    short  _spatialMediaType;
}

@property (nonatomic, readonly) short spatialMediaType;

+ (id)entityName;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;
+ (id)propertiesToFetch;
+ (id)propertySetName;

- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(bool)arg3;
- (short)spatialMediaType;

@end
