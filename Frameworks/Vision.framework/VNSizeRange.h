
@interface VNSizeRange : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _idealDimension;
    unsigned long long  _maximumDimension;
    unsigned long long  _minimumDimension;
}

@property (nonatomic, readonly) unsigned long long idealDimension;
@property (nonatomic, readonly) unsigned long long maximumDimension;
@property (nonatomic, readonly) unsigned long long minimumDimension;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)idealDimension;
- (id)initWithCoder:(id)arg1;
- (id)initWithMinimumDimension:(unsigned long long)arg1 maximumDimension:(unsigned long long)arg2 idealDimension:(unsigned long long)arg3;
- (bool)isAllowedDimension:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)maximumDimension;
- (unsigned long long)minimumDimension;

@end
