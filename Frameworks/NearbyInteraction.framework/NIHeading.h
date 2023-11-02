
@interface NIHeading : NSObject <NSCopying, NSSecureCoding> {
    double  _headingAccuracy;
    double  _magneticHeading;
    NSDate * _timestamp;
    double  _trueHeading;
}

@property (nonatomic) double headingAccuracy;
@property (nonatomic) double magneticHeading;
@property (nonatomic, copy) NSDate *timestamp;
@property (nonatomic) double trueHeading;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionInternal;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (double)headingAccuracy;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(id)arg1 trueHeading:(double)arg2 magneticHeading:(double)arg3 headingAccuracy:(double)arg4;
- (bool)isEqual:(id)arg1;
- (double)magneticHeading;
- (void)setHeadingAccuracy:(double)arg1;
- (void)setMagneticHeading:(double)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setTrueHeading:(double)arg1;
- (id)timestamp;
- (double)trueHeading;

@end
