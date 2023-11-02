
@interface _UISSecureControlTag : UISSlotTag <NSSecureCoding> {
    struct CGColor { } * _baseBackgroundColor;
    struct CGColor { } * _baseForegroundColor;
    _UISSecureControlCategory * _category;
    double  _cornerRadius;
    long long  _cornerStyle;
    unsigned long long  _imagePlacement;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly) struct CGColor { }*baseBackgroundColor;
@property (nonatomic, readonly) struct CGColor { }*baseForegroundColor;
@property (nonatomic, readonly) _UISSecureControlCategory *category;
@property (nonatomic, readonly) double cornerRadius;
@property (nonatomic, readonly) long long cornerStyle;
@property (nonatomic, readonly) unsigned long long imagePlacement;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

+ (unsigned long long)cacheLimit;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)authenticationMessageContextForStyle:(id)arg1;
- (struct CGColor { }*)baseBackgroundColor;
- (struct CGColor { }*)baseForegroundColor;
- (id)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)cornerRadius;
- (long long)cornerStyle;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)failGradeForStyle:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)hitTestInformationMaskForStyle:(id)arg1;
- (unsigned long long)imagePlacement;
- (id)initWithCategory:(id)arg1 cornerStyle:(long long)arg2 cornerRadius:(double)arg3 baseForegroundColor:(struct CGColor { }*)arg4 baseBackgroundColor:(struct CGColor { }*)arg5 imagePlacement:(unsigned long long)arg6 size:(struct CGSize { double x1; double x2; })arg7;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (id)resolvedStyleForStyle:(id)arg1;
- (unsigned int)secureNameForStyle:(id)arg1;
- (struct CGSize { double x1; double x2; })size;

@end
