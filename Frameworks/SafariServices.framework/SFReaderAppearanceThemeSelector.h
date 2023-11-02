
@interface SFReaderAppearanceThemeSelector : UIView <_SFSettingsAlertPaletteController> {
    UIButton * _grayButton;
    UIButton * _nightButton;
    long long  _selectedTheme;
    id /* block */  _selectedThemeChangedBlock;
    UIButton * _sepiaButton;
    UIStackView * _stackView;
    UIButton * _whiteButton;
}

@property (nonatomic) long long selectedTheme;
@property (nonatomic, copy) id /* block */ selectedThemeChangedBlock;
@property (nonatomic, readonly) NSArray *values;

+ (double)requiredHeight;
+ (id)themeSelectorWithBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)_buttonForTheme:(long long)arg1;
- (void)_changeSelectionForTheme:(long long)arg1 selected:(bool)arg2;
- (void)_createThemeButtons;
- (id)_imageForTheme:(long long)arg1 selected:(bool)arg2;
- (void)_themeButtonAction:(id)arg1;
- (id)_themeButtonImageWithFillColor:(id)arg1 strokeColor:(id)arg2 selected:(bool)arg3;
- (long long)_themeForButton:(id)arg1;
- (void)_updateSelectedTheme;
- (id)customPaletteView;
- (id)imageForValue:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isSelectedValue:(id)arg1;
- (void)selectValue:(id)arg1;
- (long long)selectedTheme;
- (id /* block */)selectedThemeChangedBlock;
- (id)selectedValue;
- (void)setSelectedTheme:(long long)arg1;
- (void)setSelectedThemeChangedBlock:(id /* block */)arg1;
- (id)values;

@end
