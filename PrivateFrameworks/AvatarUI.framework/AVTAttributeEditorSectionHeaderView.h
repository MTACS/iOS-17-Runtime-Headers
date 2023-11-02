
@interface AVTAttributeEditorSectionHeaderView : UICollectionReusableView {
    UIButton * _accessoryButton;
    <AVTAttributeEditorSectionHeaderViewDelegate> * _delegate;
    UILabel * _label;
    <AVTAvatarAttributeEditorSectionSupplementalPicker> * _supplementalPicker;
}

@property (nonatomic, retain) UIButton *accessoryButton;
@property (nonatomic) <AVTAttributeEditorSectionHeaderViewDelegate> *delegate;
@property (nonatomic, copy) NSString *displayString;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic, retain) <AVTAvatarAttributeEditorSectionSupplementalPicker> *supplementalPicker;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)accessoryButton;
- (id)chevronImage;
- (void)createAccessoryButtonIfNeeded;
- (id)delegate;
- (id)displayString;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isRTL;
- (id)label;
- (void)layoutSubviews;
- (void)setAccessoryButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayString:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setSupplementalPicker:(id)arg1;
- (id)supplementalPicker;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateButtonForSelectedSectionItem;
- (void)updateMenu;

@end
