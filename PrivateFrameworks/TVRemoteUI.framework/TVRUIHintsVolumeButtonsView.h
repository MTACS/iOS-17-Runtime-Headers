
@interface TVRUIHintsVolumeButtonsView : UIView {
    UIView * _bottomButtonOutline;
    double  _buttonHeight;
    TVRUIHintsGlyphView * _glyphView;
    unsigned long long  _presentation;
    <TVRUIHintsStyleProvider> * _styleProvider;
    UIView * _topButtonOutline;
}

@property (nonatomic, retain) UIView *bottomButtonOutline;
@property (nonatomic) double buttonHeight;
@property (nonatomic, retain) TVRUIHintsGlyphView *glyphView;
@property (nonatomic) unsigned long long presentation;
@property (nonatomic, retain) <TVRUIHintsStyleProvider> *styleProvider;
@property (nonatomic, retain) UIView *topButtonOutline;

- (void).cxx_destruct;
- (void)_setupConstraintsForButtonEdge:(unsigned int)arg1;
- (void)_setupConstraintsForLeftAndRightSideButtons;
- (id)bottomButtonOutline;
- (double)buttonHeight;
- (id)glyphView;
- (id)initWithPresentation:(unsigned long long)arg1 styleProvider:(id)arg2 buttonEdge:(unsigned int)arg3 buttonHeight:(double)arg4;
- (unsigned long long)presentation;
- (void)setBottomButtonOutline:(id)arg1;
- (void)setButtonHeight:(double)arg1;
- (void)setGlyphView:(id)arg1;
- (void)setPresentation:(unsigned long long)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setTopButtonOutline:(id)arg1;
- (id)styleProvider;
- (id)topButtonOutline;

@end
