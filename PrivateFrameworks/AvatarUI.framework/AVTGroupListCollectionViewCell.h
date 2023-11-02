
@interface AVTGroupListCollectionViewCell : UICollectionViewCell {
    UIImageView * _imageView;
    UILabel * _label;
    NSString * _symbolName;
    NSString * _title;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) UILabel *label;
@property (nonatomic, copy) NSString *symbolName;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) UIVisualEffectView *visualEffectView;

+ (id)cellIdentifier;
+ (id)defaultSymbolImageName;
+ (double)estimatedLabelWidthForContainerWidth:(double)arg1;
+ (id)highlightedBackgroundColor;

- (void).cxx_destruct;
- (double)estimatedLabelWidth;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (void)setSelected:(bool)arg1;
- (void)setSymbolName:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setupContent;
- (id)symbolName;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)title;
- (id)visualEffectView;

@end
