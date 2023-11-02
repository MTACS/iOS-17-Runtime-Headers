
@interface VKARWalkingArrivalFeature : VKARWalkingFeature {
    GEOARInfo * _arInfo;
    NSArray * _storeFronts;
    GEOFeatureStyleAttributes * _styleAttributes;
}

@property (nonatomic, readonly) NSArray *storeFronts;
@property (nonatomic, readonly) GEOFeatureStyleAttributes *styleAttributes;

- (void).cxx_destruct;
- (id)_stringForAttributes;
- (id)description;
- (id)initWithARInfo:(id)arg1 undulationProvider:(id /* block */)arg2 iconStyleAttributes:(id)arg3;
- (id)initWithGeocentricPosition:(struct Geocentric<double> { double x1[3]; })arg1 iconStyleAttributes:(id)arg2;
- (id)initWithPosition:(struct { double x1; double x2; double x3; })arg1 iconStyleAttributes:(id)arg2;
- (id)initWithStoreFront:(id)arg1 iconStyleAttributes:(id)arg2;
- (id)initWithStoreFronts:(id)arg1 iconStyleAttributes:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)storeFronts;
- (id)styleAttributes;

@end
