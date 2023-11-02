
@interface WFPlatformColorDefinition : NSObject {
    double  _alpha;
    double  _blue;
    double  _green;
    bool  _isDarkMode;
    bool  _isHighContrast;
    double  _red;
}

@property (nonatomic, readonly) double alpha;
@property (nonatomic, readonly) double blue;
@property (nonatomic, readonly) double green;
@property (nonatomic, readonly) bool isDarkMode;
@property (nonatomic, readonly) bool isHighContrast;
@property (nonatomic, readonly) double red;

- (double)alpha;
- (double)blue;
- (double)green;
- (id)initWithDarkMode:(bool)arg1 highContrast:(bool)arg2 red:(double)arg3 green:(double)arg4 blue:(double)arg5 alpha:(double)arg6;
- (bool)isDarkMode;
- (bool)isHighContrast;
- (double)red;

@end
