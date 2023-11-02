
@interface CLCircularGeographicCondition : CLCondition <NSSecureCoding> {
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _center;
    double  _radius;
}

@property (readonly) struct CLLocationCoordinate2D { double x1; double x2; } center;
@property (readonly) double radius;

+ (bool)supportsSecureCoding;

- (struct CLLocationCoordinate2D { double x1; double x2; })center;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCenter:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 radius:(double)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)radius;

@end
