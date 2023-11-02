
@interface PLColorSpace : NSObject {
    NSString * _colorSpaceName;
}

@property (nonatomic, copy) NSString *colorSpaceName;

+ (id)colorSpaceFromName:(id)arg1;
+ (id)commonColorSpace_displaySpace;
+ (id)commonColorSpace_sRGB;
+ (id)commonColorSpace_unspecified;

- (void).cxx_destruct;
- (id)colorSpaceName;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setColorSpaceName:(id)arg1;

@end
