
@interface PLQueryCircularRegion : NSObject <NSSecureCoding> {
    NSString * _identifier;
    double  _latitude;
    double  _longitude;
    double  _radius;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;
@property (nonatomic, readonly) double radius;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCenterLatitude:(double)arg1 centerLongitude:(double)arg2 radius:(double)arg3 identifier:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (double)latitude;
- (double)longitude;
- (double)radius;

@end
