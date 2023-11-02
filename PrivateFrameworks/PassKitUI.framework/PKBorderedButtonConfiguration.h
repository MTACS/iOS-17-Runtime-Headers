
@interface PKBorderedButtonConfiguration : UIButtonConfiguration {
    unsigned long long  _border;
    UIColor * _borderColor;
    double  _borderWidth;
}

@property (nonatomic) unsigned long long border;
@property (nonatomic, retain) UIColor *borderColor;
@property (nonatomic) double borderWidth;

+ (id)filledButtonConfiguration;
+ (id)grayButtonConfiguration;
+ (id)plainButtonConfiguration;
+ (id)tintedButtonConfiguration;

- (void).cxx_destruct;
- (void)_initializeDefaults;
- (unsigned long long)border;
- (id)borderColor;
- (double)borderWidth;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setBorder:(unsigned long long)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setBorderWidth:(double)arg1;

@end
