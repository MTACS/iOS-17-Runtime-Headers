
@interface GDTrafficBucketValue : NSObject <NSCopying, NSSecureCoding> {
    long long  _bucket;
    double  _bucketValue;
}

@property (nonatomic, readonly) long long bucket;
@property (nonatomic, readonly) double bucketValue;

+ (bool)supportsSecureCoding;

- (long long)bucket;
- (double)bucketValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBucket:(long long)arg1 bucketValue:(double)arg2;
- (id)initWithCoder:(id)arg1;

@end
