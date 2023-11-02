
@interface SLDImageSymbolConfiguration : NSObject <NSCopying, NSSecureCoding> {
    long long  _coreUISize;
    NSString * _name;
    double  _pointSize;
    NSNumber * _pointSizeNumber;
    long long  _weight;
}

@property (nonatomic) long long coreUISize;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) double pointSize;
@property (nonatomic, retain) NSNumber *pointSizeNumber;
@property (nonatomic) long long weight;

+ (id)configurationWithName:(id)arg1 coreUISize:(long long)arg2 weight:(long long)arg3 pointSize:(double)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)coreUISize;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 coreUISize:(long long)arg2 weight:(long long)arg3 pointSize:(double)arg4;
- (bool)isEqual:(id)arg1;
- (struct CGSize { double x1; double x2; })minViableSizeWithDisplayScale:(double)arg1 RTL:(bool)arg2 darkMode:(bool)arg3;
- (struct CGSize { double x1; double x2; })minViableSizeWithStyle:(id)arg1;
- (id)name;
- (double)pointSize;
- (id)pointSizeNumber;
- (void)setCoreUISize:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setPointSize:(double)arg1;
- (void)setPointSizeNumber:(id)arg1;
- (void)setWeight:(long long)arg1;
- (long long)weight;

@end
