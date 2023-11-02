
@interface FUFLightTrack : NSObject {
    FUFlightLeg * _leg;
    MKGeodesicPolyline * _polyline;
}

@property (retain) FUFlightLeg *leg;
@property (retain) MKGeodesicPolyline *polyline;

- (void).cxx_destruct;
- (id)leg;
- (id)polyline;
- (void)setLeg:(id)arg1;
- (void)setPolyline:(id)arg1;

@end
