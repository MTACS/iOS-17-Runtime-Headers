
@interface OADTableTextStyle : NSObject {
    int  mBold;
    OADColor * mColor;
    OADFontReference * mFontReference;
    int  mItalic;
}

+ (int)defaultBold;
+ (id)defaultColor;
+ (id)defaultFontReference;
+ (int)defaultItalic;
+ (id)defaultStyle;

- (void).cxx_destruct;
- (void)applyOverridesFrom:(id)arg1;
- (int)bold;
- (id)color;
- (id)description;
- (id)fontReference;
- (id)init;
- (int)italic;
- (void)setBold:(int)arg1;
- (void)setColor:(id)arg1;
- (void)setFontReference:(id)arg1;
- (void)setItalic:(int)arg1;
- (id)shallowCopy;

@end
