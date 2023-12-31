
@interface CUIPSDGradientStop : NSObject <NSCoding, NSCopying> {
    double  location;
}

+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(double)arg1;
- (bool)isColorStop;
- (bool)isDoubleStop;
- (bool)isOpacityStop;
- (double)location;
- (void)setLocation:(double)arg1;

@end
