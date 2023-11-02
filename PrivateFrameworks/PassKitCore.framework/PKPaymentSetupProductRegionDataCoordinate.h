
@interface PKPaymentSetupProductRegionDataCoordinate : NSObject <NSCopying> {
    double  _latitude;
    double  _longitude;
}

@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoordinatePair:(id)arg1;
- (double)latitude;
- (double)longitude;

@end
