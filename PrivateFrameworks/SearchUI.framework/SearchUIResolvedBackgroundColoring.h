
@interface SearchUIResolvedBackgroundColoring : NSObject {
    TLKAppearance * _bestForegroundAppearanceForBackgroundColors;
    SearchUIColorRequest * _colorRequest;
    NSArray * _originalUIColors;
    bool  _preferKeylineForShadowBasedViews;
    int  _tintStyle;
    NSArray * _tintedUIColors;
}

@property (retain) TLKAppearance *bestForegroundAppearanceForBackgroundColors;
@property (retain) SearchUIColorRequest *colorRequest;
@property (retain) NSArray *originalUIColors;
@property bool preferKeylineForShadowBasedViews;
@property int tintStyle;
@property (retain) NSArray *tintedUIColors;

- (void).cxx_destruct;
- (id)bestForegroundAppearanceForBackgroundColors;
- (id)colorRequest;
- (id)originalUIColors;
- (bool)preferKeylineForShadowBasedViews;
- (void)setBestForegroundAppearanceForBackgroundColors:(id)arg1;
- (void)setColorRequest:(id)arg1;
- (void)setOriginalUIColors:(id)arg1;
- (void)setPreferKeylineForShadowBasedViews:(bool)arg1;
- (void)setTintStyle:(int)arg1;
- (void)setTintedUIColors:(id)arg1;
- (int)tintStyle;
- (id)tintedUIColors;

@end
