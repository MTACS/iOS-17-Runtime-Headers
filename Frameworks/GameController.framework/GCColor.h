
@interface GCColor : NSObject <NSCopying, NSSecureCoding> {
    float  _blue;
    float  _green;
    float  _red;
}

@property (readonly) float blue;
@property (readonly) float green;
@property (readonly) float red;

+ (bool)supportsSecureCoding;

- (float)blue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (float)green;
- (id)initWithCoder:(id)arg1;
- (id)initWithColorPreset:(long long)arg1;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
- (float)red;

@end
