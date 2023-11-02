
@interface SHRegion : NSObject {
    NSString * _geohash;
    CLLocation * _location;
}

@property (nonatomic, readonly, copy) NSString *geohash;
@property (nonatomic, readonly) CLLocation *location;

- (void).cxx_destruct;
- (id)geohash;
- (id)initWithGeohash:(id)arg1;
- (id)initWithLocation:(id)arg1;
- (id)location;

@end
