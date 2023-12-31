
@interface STMapViewportVertex : NSObject <NSSecureCoding> {
    double  _latitude;
    double  _longitude;
}

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)latitude;
- (double)longitude;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;

@end
