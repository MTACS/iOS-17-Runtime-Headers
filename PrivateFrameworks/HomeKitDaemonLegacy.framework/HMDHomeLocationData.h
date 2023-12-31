
@interface HMDHomeLocationData : HMFObject <NSSecureCoding> {
    CLLocation * _location;
    NSDate * _locationUpdateTimestamp;
}

@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) NSDate *locationUpdateTimestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(id)arg1 locationUpdateTimestamp:(id)arg2;
- (id)location;
- (id)locationUpdateTimestamp;

@end
