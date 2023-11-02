
@interface _CLLSLLocationCoordinate : NSObject <NSCopying, NSSecureCoding> {
    double  _latitude;
    double  _longitude;
}

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (double)latitude;
- (double)longitude;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;

@end
