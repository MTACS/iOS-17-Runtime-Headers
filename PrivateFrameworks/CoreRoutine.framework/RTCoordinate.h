
@interface RTCoordinate : NSObject <NSCopying, NSSecureCoding> {
    double  _latitude;
    double  _longitude;
}

@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCoordinate:(id)arg1;
- (double)latitude;
- (double)longitude;

@end
