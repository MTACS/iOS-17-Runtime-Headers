
@interface WeatherMaps.WeatherMapAnnotation : NSObject <MKAnnotation> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  annotatedLocation;
}

@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)init;
- (id)title;

@end
