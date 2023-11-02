
@interface ACUISSizeDimensionRequest : NSObject <NSCopying, NSSecureCoding> {
    double  _maximum;
    double  _minimum;
    long long  _type;
}

@property (nonatomic, readonly) double maximum;
@property (nonatomic, readonly) double minimum;
@property (nonatomic, readonly) long long type;

+ (id)fixed:(double)arg1;
+ (id)new;
+ (bool)supportsSecureCoding;

- (id)_sizeDimensionRequest;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDimensionRequest:(id)arg1;
- (id)initWithMinimum:(double)arg1 maximum:(double)arg2;
- (id)initWithMinimum:(double)arg1 maximum:(double)arg2 type:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (double)maximum;
- (double)minimum;
- (long long)objcTypeFromSwift:(long long)arg1;
- (long long)swiftTypeFromObjc:(long long)arg1;
- (long long)type;

@end
