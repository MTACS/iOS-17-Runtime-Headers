
@interface StocksStyle : NSObject {
    UIColor * _chartHighlightColor;
    UIFont * _chartLabelFont;
    UIFont * _mainFont;
}

+ (id)sharedStyle;

- (void).cxx_destruct;
- (id)boldFontOfSize:(double)arg1;
- (id)chartHighlightColor;
- (id)fontOfSize:(double)arg1;
- (id)gainColor;
- (id)init;
- (id)lightFontOfSize:(double)arg1;
- (id)lossColor;
- (id)mediumFontOfSize:(double)arg1;
- (void)resetLocale;

@end