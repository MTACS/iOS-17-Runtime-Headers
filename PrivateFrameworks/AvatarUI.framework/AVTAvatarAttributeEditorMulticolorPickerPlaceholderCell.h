
@interface AVTAvatarAttributeEditorMulticolorPickerPlaceholderCell : UICollectionViewCell {
    <AVTAvatarAttributeEditorSectionItem> * _item;
    UILabel * _label;
}

@property (nonatomic, retain) <AVTAvatarAttributeEditorSectionItem> *item;
@property (nonatomic, retain) UILabel *label;

+ (id)cellIdentifier;
+ (double)estimatedTitleSpaceForWidth:(double)arg1;
+ (double)estimatedWidthForLabelSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)labelFont;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)item;
- (id)label;
- (void)layoutSubviews;
- (void)setItem:(id)arg1;
- (void)setLabel:(id)arg1;

@end
