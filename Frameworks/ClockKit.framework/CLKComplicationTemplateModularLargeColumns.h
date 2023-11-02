
@interface CLKComplicationTemplateModularLargeColumns : CLKComplicationTemplate {
    long long  _column2Alignment;
    CLKTextProvider * _row1Column1TextProvider;
    CLKTextProvider * _row1Column2TextProvider;
    CLKImageProvider * _row1ImageProvider;
    CLKTextProvider * _row2Column1TextProvider;
    CLKTextProvider * _row2Column2TextProvider;
    CLKImageProvider * _row2ImageProvider;
    CLKTextProvider * _row3Column1TextProvider;
    CLKTextProvider * _row3Column2TextProvider;
    CLKImageProvider * _row3ImageProvider;
    bool  _useNoColumnPadding;
}

@property (nonatomic) long long column2Alignment;
@property (nonatomic, copy) CLKTextProvider *row1Column1TextProvider;
@property (nonatomic, copy) CLKTextProvider *row1Column2TextProvider;
@property (nonatomic, copy) CLKImageProvider *row1ImageProvider;
@property (nonatomic, copy) CLKTextProvider *row2Column1TextProvider;
@property (nonatomic, copy) CLKTextProvider *row2Column2TextProvider;
@property (nonatomic, copy) CLKImageProvider *row2ImageProvider;
@property (nonatomic, copy) CLKTextProvider *row3Column1TextProvider;
@property (nonatomic, copy) CLKTextProvider *row3Column2TextProvider;
@property (nonatomic, copy) CLKImageProvider *row3ImageProvider;
@property (nonatomic) bool useNoColumnPadding;

+ (id)templateWithRow1Column1TextProvider:(id)arg1 row1Column2TextProvider:(id)arg2 row2Column1TextProvider:(id)arg3 row2Column2TextProvider:(id)arg4 row3Column1TextProvider:(id)arg5 row3Column2TextProvider:(id)arg6;
+ (id)templateWithRow1ImageProvider:(id)arg1 row1Column1TextProvider:(id)arg2 row1Column2TextProvider:(id)arg3 row2ImageProvider:(id)arg4 row2Column1TextProvider:(id)arg5 row2Column2TextProvider:(id)arg6 row3ImageProvider:(id)arg7 row3Column1TextProvider:(id)arg8 row3Column2TextProvider:(id)arg9;

- (void).cxx_destruct;
- (void)_enumerateImageProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateIntegerKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (long long)column2Alignment;
- (long long)compatibleFamily;
- (id)initWithRow1Column1TextProvider:(id)arg1 row1Column2TextProvider:(id)arg2 row2Column1TextProvider:(id)arg3 row2Column2TextProvider:(id)arg4 row3Column1TextProvider:(id)arg5 row3Column2TextProvider:(id)arg6;
- (id)initWithRow1ImageProvider:(id)arg1 row1Column1TextProvider:(id)arg2 row1Column2TextProvider:(id)arg3 row2ImageProvider:(id)arg4 row2Column1TextProvider:(id)arg5 row2Column2TextProvider:(id)arg6 row3ImageProvider:(id)arg7 row3Column1TextProvider:(id)arg8 row3Column2TextProvider:(id)arg9;
- (id)row1Column1TextProvider;
- (id)row1Column2TextProvider;
- (id)row1ImageProvider;
- (id)row2Column1TextProvider;
- (id)row2Column2TextProvider;
- (id)row2ImageProvider;
- (id)row3Column1TextProvider;
- (id)row3Column2TextProvider;
- (id)row3ImageProvider;
- (void)setColumn2Alignment:(long long)arg1;
- (void)setRow1Column1TextProvider:(id)arg1;
- (void)setRow1Column2TextProvider:(id)arg1;
- (void)setRow1ImageProvider:(id)arg1;
- (void)setRow2Column1TextProvider:(id)arg1;
- (void)setRow2Column2TextProvider:(id)arg1;
- (void)setRow2ImageProvider:(id)arg1;
- (void)setRow3Column1TextProvider:(id)arg1;
- (void)setRow3Column2TextProvider:(id)arg1;
- (void)setRow3ImageProvider:(id)arg1;
- (void)setUseNoColumnPadding:(bool)arg1;
- (bool)useNoColumnPadding;

@end
