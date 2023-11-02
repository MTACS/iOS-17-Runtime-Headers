
@interface NewsUI2.ChannelCategoryStyler : _TtCs12_SwiftObject <NEFeedNavImageStylerType> {
    void baseStyler;
    void colorPaletteProvider;
    void feedNavImageStyler;
    void headlineFontMetrics;
    void subtitleFontMetrics;
}

@property (nonatomic, readonly) double cornerRadius;
@property (nonatomic, readonly) double padding;
@property (nonatomic, readonly) UIFont *tagTitleFont;

- (double)cornerRadius;
- (double)padding;
- (id)tagColorFor:(id)arg1;
- (id)tagTitleFont;

@end
