
@interface NTKExplorerDotLayoutConstraints : NSObject <NSCopying, NSSecureCoding> {
    double  _dotBorderWidth;
    double  _dotDiameter;
    double  _dotSpacing;
    double  _noServiceDotHeight;
}

@property double dotBorderWidth;
@property double dotDiameter;
@property double dotSpacing;
@property double noServiceDotHeight;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dotBorderWidth;
- (double)dotDiameter;
- (double)dotSpacing;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLayoutConstraints:(id)arg1;
- (double)noServiceDotHeight;
- (void)setDotBorderWidth:(double)arg1;
- (void)setDotDiameter:(double)arg1;
- (void)setDotSpacing:(double)arg1;
- (void)setNoServiceDotHeight:(double)arg1;

@end
