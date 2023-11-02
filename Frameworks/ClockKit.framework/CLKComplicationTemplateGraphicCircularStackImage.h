
@interface CLKComplicationTemplateGraphicCircularStackImage : CLKComplicationTemplateGraphicCircular {
    CLKFullColorImageProvider * _line1ImageProvider;
    CLKTextProvider * _line2TextProvider;
}

@property (nonatomic, copy) CLKFullColorImageProvider *line1ImageProvider;
@property (nonatomic, copy) CLKTextProvider *line2TextProvider;

+ (id)templateWithLine1ImageProvider:(id)arg1 line2TextProvider:(id)arg2;

- (void).cxx_destruct;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (id)initWithLine1ImageProvider:(id)arg1 line2TextProvider:(id)arg2;
- (id)line1ImageProvider;
- (id)line2TextProvider;
- (void)setLine1ImageProvider:(id)arg1;
- (void)setLine2TextProvider:(id)arg1;

@end
