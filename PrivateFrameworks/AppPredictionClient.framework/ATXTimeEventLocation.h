
@interface ATXTimeEventLocation : NSObject <NSSecureCoding> {
    long long  _destinationLOIType;
    CLLocation * _geoLocation;
    NSString * _title;
}

@property (nonatomic, readonly) long long destinationLOIType;
@property (nonatomic, readonly) CLLocation *geoLocation;
@property (nonatomic, readonly, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)destinationLOIType;
- (void)encodeWithCoder:(id)arg1;
- (id)geoLocation;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(id)arg1 title:(id)arg2 type:(long long)arg3;
- (bool)isApproximatelyEqualTo:(id)arg1;
- (id)title;

@end
