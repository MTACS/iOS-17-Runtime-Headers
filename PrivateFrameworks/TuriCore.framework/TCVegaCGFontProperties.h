
@interface TCVegaCGFontProperties : NSObject {
    NSString * cssFontString;
    NSString * fontFamily;
    NSString * fontSize;
    NSString * fontStyle;
    NSString * fontVariant;
    NSString * fontWeight;
    NSString * lineHeight;
}

@property (nonatomic, retain) NSString *cssFontString;
@property (nonatomic, retain) NSString *fontFamily;
@property (nonatomic, retain) NSString *fontSize;
@property (nonatomic, retain) NSString *fontStyle;
@property (nonatomic, retain) NSString *fontVariant;
@property (nonatomic, retain) NSString *fontWeight;
@property (nonatomic, retain) NSString *lineHeight;

- (void).cxx_destruct;
- (id)cssFontString;
- (id)fontFamily;
- (id)fontSize;
- (id)fontStyle;
- (id)fontVariant;
- (id)fontWeight;
- (id)initWithString:(id)arg1;
- (id)lineHeight;
- (void)setCssFontString:(id)arg1;
- (void)setFontFamily:(id)arg1;
- (void)setFontSize:(id)arg1;
- (void)setFontStyle:(id)arg1;
- (void)setFontVariant:(id)arg1;
- (void)setFontWeight:(id)arg1;
- (void)setLineHeight:(id)arg1;

@end
