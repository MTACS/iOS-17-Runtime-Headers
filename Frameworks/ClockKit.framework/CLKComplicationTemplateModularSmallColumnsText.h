
@interface CLKComplicationTemplateModularSmallColumnsText : CLKComplicationTemplate {
    long long  _column2Alignment;
    bool  _highlightColumn2;
    CLKTextProvider * _row1Column1TextProvider;
    CLKTextProvider * _row1Column2TextProvider;
    CLKTextProvider * _row2Column1TextProvider;
    CLKTextProvider * _row2Column2TextProvider;
}

@property (nonatomic) long long column2Alignment;
@property (nonatomic) bool highlightColumn2;
@property (nonatomic, copy) CLKTextProvider *row1Column1TextProvider;
@property (nonatomic, copy) CLKTextProvider *row1Column2TextProvider;
@property (nonatomic, copy) CLKTextProvider *row2Column1TextProvider;
@property (nonatomic, copy) CLKTextProvider *row2Column2TextProvider;

+ (id)templateWithRow1Column1TextProvider:(id)arg1 row1Column2TextProvider:(id)arg2 row2Column1TextProvider:(id)arg3 row2Column2TextProvider:(id)arg4;

- (void).cxx_destruct;
- (void)_enumerateBOOLKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateIntegerKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (long long)column2Alignment;
- (long long)compatibleFamily;
- (bool)highlightColumn2;
- (id)initWithRow1Column1TextProvider:(id)arg1 row1Column2TextProvider:(id)arg2 row2Column1TextProvider:(id)arg3 row2Column2TextProvider:(id)arg4;
- (id)row1Column1TextProvider;
- (id)row1Column2TextProvider;
- (id)row2Column1TextProvider;
- (id)row2Column2TextProvider;
- (void)setColumn2Alignment:(long long)arg1;
- (void)setHighlightColumn2:(bool)arg1;
- (void)setRow1Column1TextProvider:(id)arg1;
- (void)setRow1Column2TextProvider:(id)arg1;
- (void)setRow2Column1TextProvider:(id)arg1;
- (void)setRow2Column2TextProvider:(id)arg1;

@end
