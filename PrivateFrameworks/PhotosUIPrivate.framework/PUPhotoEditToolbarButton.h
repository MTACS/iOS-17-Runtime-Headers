
@interface PUPhotoEditToolbarButton : PXUIButton {
    id /* block */  _actionBlock;
    bool  _isTopToolbarButton;
    PUPhotoEditViewControllerSpec * _photoEditSpec;
    UIColor * _selectedColor;
    bool  _selectedGlyphHasHighlightColor;
    NSString * _selectedGlyphName;
    UIImageView * _selectionIndicator;
    long long  _selectionIndicatorType;
    NSString * _title;
    UILabel * _toolLabel;
    NSString * _unselectedGlyphName;
    bool  _usesHierarchicalColor;
}

@property (nonatomic, copy) id /* block */ actionBlock;
@property (nonatomic) bool isTopToolbarButton;
@property (nonatomic, retain) PUPhotoEditViewControllerSpec *photoEditSpec;
@property (nonatomic, retain) UIColor *selectedColor;
@property (nonatomic) bool selectedGlyphHasHighlightColor;
@property (nonatomic, retain) NSString *selectedGlyphName;
@property (nonatomic, retain) UIImageView *selectionIndicator;
@property (nonatomic) long long selectionIndicatorType;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) UILabel *toolLabel;
@property (nonatomic, retain) NSString *unselectedGlyphName;
@property (nonatomic) bool usesHierarchicalColor;

+ (id)buttonForTool:(id)arg1 showingLabel:(bool)arg2 selectionIndicatorType:(long long)arg3 spec:(id)arg4;
+ (id)buttonWithImageNamed:(id)arg1 selectedImageNamed:(id)arg2 accessibilityLabel:(id)arg3 spec:(id)arg4;
+ (id)constraintsForSelectionIndicatorType:(long long)arg1 buttonImageView:(id)arg2 selectionIndicator:(id)arg3;
+ (id)selectionIndicatorImageForType:(long long)arg1;

- (void).cxx_destruct;
- (id /* block */)actionBlock;
- (id)baseConfiguration;
- (void)buttonTouchUpAction:(id)arg1;
- (id)imageConfigurationForSelectedState:(bool)arg1;
- (id)imageForState:(unsigned long long)arg1;
- (bool)isTopToolbarButton;
- (id)largeContentImage;
- (id)largeContentTitle;
- (id)photoEditSpec;
- (id)selectedColor;
- (id)selectedConfiguration;
- (bool)selectedGlyphHasHighlightColor;
- (id)selectedGlyphName;
- (id)selectionIndicator;
- (long long)selectionIndicatorType;
- (void)setActionBlock:(id /* block */)arg1;
- (void)setIsTopToolbarButton:(bool)arg1;
- (void)setPhotoEditSpec:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectedColor:(id)arg1;
- (void)setSelectedGlyphHasHighlightColor:(bool)arg1;
- (void)setSelectedGlyphName:(id)arg1;
- (void)setSelectionIndicator:(id)arg1;
- (void)setSelectionIndicatorType:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setToolLabel:(id)arg1;
- (void)setUnselectedGlyphName:(id)arg1;
- (void)setUsesHierarchicalColor:(bool)arg1;
- (id)title;
- (id)toolLabel;
- (id)unselectedConfiguration;
- (id)unselectedGlyphName;
- (void)updateConfiguration;
- (bool)usesHierarchicalColor;

@end
