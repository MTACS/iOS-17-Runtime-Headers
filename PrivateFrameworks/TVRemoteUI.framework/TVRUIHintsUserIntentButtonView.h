
@interface TVRUIHintsUserIntentButtonView : UIView {
    UIView * _buttonOutline;
    TVRUIHintsGlyphView * _glyphView;
    unsigned long long  _presentation;
    <TVRUIHintsStyleProvider> * _styleProvider;
}

@property (nonatomic, retain) UIView *buttonOutline;
@property (nonatomic, retain) TVRUIHintsGlyphView *glyphView;
@property (nonatomic) unsigned long long presentation;
@property (nonatomic, retain) <TVRUIHintsStyleProvider> *styleProvider;

- (void).cxx_destruct;
- (void)_setupConstraintsForButtonEdge:(unsigned int)arg1;
- (id)buttonOutline;
- (id)glyphView;
- (id)initWithPresentation:(unsigned long long)arg1 styleProvider:(id)arg2 buttonEdge:(unsigned int)arg3;
- (unsigned long long)presentation;
- (void)setButtonOutline:(id)arg1;
- (void)setGlyphView:(id)arg1;
- (void)setPresentation:(unsigned long long)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;

@end
