
@interface _CLVertex : NSObject <NSCopying, NSSecureCoding> {
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _coordinate;
}

@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;

+ (bool)supportsSecureCoding;

- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)getDistanceFrom:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (unsigned long long)hash;
- (id)initWithClientCoordinate:(struct { double x1; double x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (bool)isEqual:(id)arg1;

@end
