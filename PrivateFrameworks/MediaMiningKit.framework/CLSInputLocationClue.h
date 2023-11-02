
@interface CLSInputLocationClue : CLSInputClue {
    CLSPlace * _place;
    unsigned long long  numberOfAssets;
}

@property (nonatomic) unsigned long long numberOfAssets;

+ (id)clueWithLocation:(id)arg1;
+ (id)cluesWithLocations:(id)arg1;

- (void).cxx_destruct;
- (void)_prepareWithProgressBlock:(id /* block */)arg1;
- (struct CLLocationCoordinate2D { double x1; double x2; })closestCoordinates;
- (id)description;
- (double)gpsHorizontalAccuracy;
- (bool)isDefinite;
- (bool)isEqualToClue:(id)arg1;
- (id)location;
- (unsigned long long)numberOfAssets;
- (id)place;
- (id)placemark;
- (id)projectedLocation;
- (id)region;
- (id)regionInPlacemark;
- (void)setNumberOfAssets:(unsigned long long)arg1;
- (void)setPlace:(id)arg1;

@end
