
@interface CLKComplicationTemplateModularLargeTable : CLKComplicationTemplate {
    long long  _column2Alignment;
    CLKImageProvider * _headerImageProvider;
    CLKTextProvider * _headerTextProvider;
    CLKTextProvider * _row1Column1TextProvider;
    CLKTextProvider * _row1Column2TextProvider;
    CLKTextProvider * _row2Column1TextProvider;
    CLKTextProvider * _row2Column2TextProvider;
    bool  _useNoColumnPadding;
}

@property (nonatomic) long long column2Alignment;
@property (nonatomic, copy) CLKImageProvider *headerImageProvider;
@property (nonatomic, copy) CLKTextProvider *headerTextProvider;
@property (nonatomic, copy) CLKTextProvider *row1Column1TextProvider;
@property (nonatomic, copy) CLKTextProvider *row1Column2TextProvider;
@property (nonatomic, copy) CLKTextProvider *row2Column1TextProvider;
@property (nonatomic, copy) CLKTextProvider *row2Column2TextProvider;
@property (nonatomic) bool useNoColumnPadding;

+ (id)templateWithHeaderImageProvider:(id)arg1 headerTextProvider:(id)arg2 row1Column1TextProvider:(id)arg3 row1Column2TextProvider:(id)arg4 row2Column1TextProvider:(id)arg5 row2Column2TextProvider:(id)arg6;
+ (id)templateWithHeaderTextProvider:(id)arg1 row1Column1TextProvider:(id)arg2 row1Column2TextProvider:(id)arg3 row2Column1TextProvider:(id)arg4 row2Column2TextProvider:(id)arg5;

- (void).cxx_destruct;
- (void)_enumerateImageProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateIntegerKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (long long)column2Alignment;
- (long long)compatibleFamily;
- (id)headerImageProvider;
- (id)headerTextProvider;
- (id)initWithHeaderImageProvider:(id)arg1 headerTextProvider:(id)arg2 row1Column1TextProvider:(id)arg3 row1Column2TextProvider:(id)arg4 row2Column1TextProvider:(id)arg5 row2Column2TextProvider:(id)arg6;
- (id)initWithHeaderTextProvider:(id)arg1 row1Column1TextProvider:(id)arg2 row1Column2TextProvider:(id)arg3 row2Column1TextProvider:(id)arg4 row2Column2TextProvider:(id)arg5;
- (id)row1Column1TextProvider;
- (id)row1Column2TextProvider;
- (id)row2Column1TextProvider;
- (id)row2Column2TextProvider;
- (void)setColumn2Alignment:(long long)arg1;
- (void)setHeaderImageProvider:(id)arg1;
- (void)setHeaderTextProvider:(id)arg1;
- (void)setRow1Column1TextProvider:(id)arg1;
- (void)setRow1Column2TextProvider:(id)arg1;
- (void)setRow2Column1TextProvider:(id)arg1;
- (void)setRow2Column2TextProvider:(id)arg1;
- (void)setUseNoColumnPadding:(bool)arg1;
- (bool)useNoColumnPadding;

@end
