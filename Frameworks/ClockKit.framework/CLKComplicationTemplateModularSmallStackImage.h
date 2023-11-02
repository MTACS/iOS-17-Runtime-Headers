
@interface CLKComplicationTemplateModularSmallStackImage : CLKComplicationTemplate {
    unsigned long long  _highlightMode;
    CLKImageProvider * _line1ImageProvider;
    CLKTextProvider * _line2TextProvider;
}

@property (nonatomic) bool highlightLine2;
@property (nonatomic) unsigned long long highlightMode;
@property (nonatomic, copy) CLKImageProvider *line1ImageProvider;
@property (nonatomic, copy) CLKTextProvider *line2TextProvider;

+ (void)imageSDKSize:(struct CGSize { double x1; double x2; }*)arg1 deviceSize:(struct CGSize { double x1; double x2; }*)arg2 forSDKVersion:(long long)arg3;
+ (id)templateWithLine1ImageProvider:(id)arg1 line2TextProvider:(id)arg2;

- (void).cxx_destruct;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1;
- (void)_enumerateImageProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateIntegerKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (long long)compatibleFamily;
- (bool)highlightLine2;
- (unsigned long long)highlightMode;
- (id)initPrivateWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2;
- (id)initWithLine1ImageProvider:(id)arg1 line2TextProvider:(id)arg2;
- (id)line1ImageProvider;
- (id)line2TextProvider;
- (void)setHighlightLine2:(bool)arg1;
- (void)setHighlightMode:(unsigned long long)arg1;
- (void)setLine1ImageProvider:(id)arg1;
- (void)setLine2TextProvider:(id)arg1;

@end
