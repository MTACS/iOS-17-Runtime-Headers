
@interface CTCALocationState : NSObject <NSCopying, NSSecureCoding> {
    long long  _locationAcquisitionStatus;
}

@property (nonatomic) long long locationAcquisitionStatus;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)locationAcquisitionStatus;
- (void)setLocationAcquisitionStatus:(long long)arg1;

@end
