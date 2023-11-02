
@interface PUCurationGeoHashContainer : NSObject {
    long long  _assetCount;
    NSArray * _assetUUIDs;
    NSString * _cityName;
    NSString * _geoHash;
}

@property (nonatomic, readonly) long long assetCount;
@property (nonatomic, readonly) NSArray *assetUUIDs;
@property (nonatomic, readonly) NSString *cityName;
@property (nonatomic, readonly) NSString *geoHash;

- (void).cxx_destruct;
- (long long)assetCount;
- (id)assetUUIDs;
- (id)cityName;
- (id)geoHash;
- (id)initWithGeoHash:(id)arg1 assetUUIDs:(id)arg2 cityName:(id)arg3;

@end
