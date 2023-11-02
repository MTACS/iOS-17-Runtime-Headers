
@interface CLKComplicationTemplateCircularSmallStackImage : CLKComplicationTemplate {
    CLKImageProvider * _line1ImageProvider;
    CLKTextProvider * _line2TextProvider;
}

@property (nonatomic, copy) CLKImageProvider *line1ImageProvider;
@property (nonatomic, copy) CLKTextProvider *line2TextProvider;

+ (void)_imageSDKSize:(struct CGSize { double x1; double x2; }*)arg1 deviceSize:(struct CGSize { double x1; double x2; }*)arg2 forSDKVersion:(long long)arg3;
+ (id)templateWithLine1ImageProvider:(id)arg1 line2TextProvider:(id)arg2;

- (void).cxx_destruct;
- (void)_enumerateImageProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (long long)compatibleFamily;
- (id)initWithLine1ImageProvider:(id)arg1 line2TextProvider:(id)arg2;
- (id)line1ImageProvider;
- (id)line2TextProvider;
- (void)setLine1ImageProvider:(id)arg1;
- (void)setLine2TextProvider:(id)arg1;

@end
