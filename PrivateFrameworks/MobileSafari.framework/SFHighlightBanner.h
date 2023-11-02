
@interface SFHighlightBanner : SFPinnableBanner {
    SWAttributionView * _attributionView;
    SFThemeColorEffectView * _backdrop;
    id /* block */  _closeActionHandler;
    SLHighlight * _highlight;
}

@property (nonatomic, copy) id /* block */ closeActionHandler;
@property (nonatomic, readonly) SLHighlight *highlight;

- (void).cxx_destruct;
- (void)_close;
- (id /* block */)closeActionHandler;
- (id)highlight;
- (id)initWithHighlight:(id)arg1;
- (void)setCloseActionHandler:(id /* block */)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)themeDidChange;

@end
