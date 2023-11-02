
@interface AKFontListController : NSObject {
    UIFont * _defaultFont;
    NSArray * _fonts;
}

@property (retain) UIFont *defaultFont;
@property (retain) NSArray *fonts;

+ (id)attributedStringForFont:(id)arg1;

- (void).cxx_destruct;
- (id)_createFontsList;
- (id)defaultFont;
- (id)fonts;
- (id)initWithController:(id)arg1;
- (void)setDefaultFont:(id)arg1;
- (void)setFonts:(id)arg1;

@end
