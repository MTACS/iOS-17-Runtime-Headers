
@interface PUPhotoEditToolActivationButton : PXUIButton {
    id /* block */  _actionBlock;
    id /* block */  _isSelectedBlock;
    UIButtonConfiguration * _overrideButtonConfiguration;
    NSString * _selectedGlyphName;
    NSString * _title;
    NSString * _unselectedGlyphName;
}

@property (nonatomic, copy) id /* block */ actionBlock;
@property (nonatomic, copy) id /* block */ isSelectedBlock;
@property (nonatomic, retain) UIButtonConfiguration *overrideButtonConfiguration;
@property (nonatomic, readonly) UIButtonConfiguration *selectedConfiguration;
@property (nonatomic, retain) NSString *selectedGlyphName;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) UIButtonConfiguration *unselectedConfiguration;
@property (nonatomic, retain) NSString *unselectedGlyphName;

+ (id)buttonWithTitle:(id)arg1;

- (void).cxx_destruct;
- (id /* block */)actionBlock;
- (id)baseConfiguration;
- (void)buttonTouchUpAction:(id)arg1;
- (id)imageConfigurationForSelectedState:(bool)arg1;
- (id /* block */)isSelectedBlock;
- (id)overrideButtonConfiguration;
- (id)selectedConfiguration;
- (id)selectedGlyphName;
- (void)setActionBlock:(id /* block */)arg1;
- (void)setIsSelectedBlock:(id /* block */)arg1;
- (void)setOverrideButtonConfiguration:(id)arg1;
- (void)setSelectedGlyphName:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUnselectedGlyphName:(id)arg1;
- (id)title;
- (id)unselectedConfiguration;
- (id)unselectedGlyphName;
- (void)updateConfiguration;

@end
