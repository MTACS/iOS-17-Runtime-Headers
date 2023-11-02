
@protocol CSThermalStatusProviding <NSObject>

@required

+ (UIImage *)thermometerGlyphForThermalStatus:(long long)arg1;

- (long long)thermalStatus;

@end
