
@interface AVTAvatarAttributeEditorMulticolorPickerCell : UICollectionViewCell {
    UIButton * _clearButton;
    CALayer * _colorView;
    <AVTAvatarAttributeEditorMulticolorPickerCellDelegate> * _delegate;
    <AVTAvatarAttributeEditorSectionItem> * _item;
    UILabel * _label;
}

@property (nonatomic, retain) UIButton *clearButton;
@property (nonatomic, retain) CALayer *colorView;
@property (nonatomic) <AVTAvatarAttributeEditorMulticolorPickerCellDelegate> *delegate;
@property (nonatomic, retain) <AVTAvatarAttributeEditorSectionItem> *item;
@property (nonatomic, retain) UILabel *label;

+ (id)cellIdentifier;
+ (double)estimatedTitleSpaceForWidth:(double)arg1 isRemovable:(bool)arg2 isSelected:(bool)arg3;
+ (double)estimatedWidthForLabelSize:(struct CGSize { double x1; double x2; })arg1 isRemovable:(bool)arg2 isSelected:(bool)arg3;
+ (id)labelFont;

- (void).cxx_destruct;
- (void)applyAppearanceForSelected:(bool)arg1;
- (void)applyDefaultAppearanceForStyle:(long long)arg1;
- (void)applySelectedAppearanceForStyle:(long long)arg1;
- (id)clearButton;
- (id)colorView;
- (id)delegate;
- (void)didTapClearButton:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isRTL;
- (bool)isRemovable;
- (bool)isShowingRemoveButton;
- (id)item;
- (id)label;
- (void)layoutForLTR;
- (void)layoutForRTL;
- (void)layoutSubviews;
- (void)setClearButton:(id)arg1;
- (void)setColorView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setSelected:(bool)arg1;
- (bool)shouldShowColorBorder;
- (void)showDropShadow;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateColor;
- (void)updateColorViewBorder;

@end
