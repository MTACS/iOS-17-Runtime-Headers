
@interface PHAssetCoarseLocationProperties : PHAssetPropertySet {
    double  _gpsHorizontalAccuracy;
}

@property (nonatomic, readonly) double gpsHorizontalAccuracy;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (double)gpsHorizontalAccuracy;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(bool)arg3;

@end
