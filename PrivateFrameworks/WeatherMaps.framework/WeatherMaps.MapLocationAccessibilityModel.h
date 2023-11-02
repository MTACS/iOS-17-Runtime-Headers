
@interface WeatherMaps.MapLocationAccessibilityModel : NSObject {
    void accessibilityDescription;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  expiration;
    void location;
    void overlayDescriptionKey;
}

@property (nonatomic, readonly) NSString *accessibilityDescription;
@property (nonatomic, readonly) NSDate *expiration;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) NSString *overlayDescriptionKey;

- (void).cxx_destruct;
- (id)accessibilityDescription;
- (id)expiration;
- (id)init;
- (id)location;
- (id)overlayDescriptionKey;

@end
