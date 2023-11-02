
@interface PHAssetPhotosInfoPanelLocationProperties : PHAssetPropertySet {
    NSData * _placeAnnotationData;
}

@property (nonatomic, readonly) NSData *placeAnnotationData;

+ (id)keyPathFromPrimaryObject;
+ (id)propertiesToFetch;
+ (id)propertySetName;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(bool)arg3;
- (id)placeAnnotationData;

@end
