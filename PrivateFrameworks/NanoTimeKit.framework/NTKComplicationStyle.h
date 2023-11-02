
@interface NTKComplicationStyle : NSObject <NSMutableCopying, NSSecureCoding> {
    UIColor * _circularPlatterColor;
    long long  _fontStyle;
}

@property (nonatomic, readonly, copy) UIColor *circularPlatterColor;
@property (nonatomic, readonly) long long fontStyle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithStyle:(id)arg1;
- (id)circularPlatterColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)fontStyle;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
