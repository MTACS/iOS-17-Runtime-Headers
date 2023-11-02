
@interface PXMemoriesBlacklistPlaceLocationAccessoryViewSpec : PXMemoriesBlacklistAccessoryViewSpec {
    CLLocation * _location;
    double  _regionRadius;
}

@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) double regionRadius;

+ (id)specWithLocation:(id)arg1 regionRadius:(double)arg2;

- (void).cxx_destruct;
- (id)initWithLocation:(id)arg1 regionRadius:(double)arg2;
- (id)location;
- (double)regionRadius;

@end
