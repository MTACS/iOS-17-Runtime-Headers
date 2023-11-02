
@interface PHAssetLocationDataProperties : PHAssetPropertySet {
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _coordinate;
}

@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;

+ (id)entityName;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;
+ (id)propertiesToFetch;
+ (id)propertySetName;

- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(bool)arg3;

@end
