
@interface MKReverseGeocoder : NSObject {
    MKReverseGeocoderInternal * _internal;
}

@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (nonatomic) <MKReverseGeocoderDelegate> *delegate;
@property (nonatomic, readonly) MKPlacemark *placemark;
@property (getter=isQuerying, nonatomic, readonly) bool querying;

- (void).cxx_destruct;
- (void)_notifyError:(id)arg1;
- (void)_notifyNoResults;
- (void)_notifyResult:(id)arg1;
- (void)cancel;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)delegate;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (bool)isQuerying;
- (id)placemark;
- (void)setCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)start;

@end
