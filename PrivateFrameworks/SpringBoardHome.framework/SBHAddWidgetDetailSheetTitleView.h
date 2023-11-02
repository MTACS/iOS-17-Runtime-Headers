
@interface SBHAddWidgetDetailSheetTitleView : UIView <SBHAddWidgetSheetAppCollectionViewCellConfigurable> {
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _contentInsets;
    SBHAddWidgetDetailSheetViewController * _delegate;
    struct SBIconImageInfo { 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
        double scale; 
        double continuousCornerRadius; 
    }  _iconImageInfo;
    UIImageView * _imageView;
    UILabel * _textLabel;
}

@property (nonatomic, readonly) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic, readonly) struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; } iconImageInfo;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UILabel *textLabel;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)_textLabelFont;
- (unsigned long long)_textLabelNumberOfLines;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (void)dealloc;
- (struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })iconImageInfo;
- (id)imageView;
- (id)initWithIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1 contentInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setAddWidgetSheetAppCollectionViewCellIconImage:(id)arg1;
- (void)setAddWidgetSheetAppCollectionViewCellTitle:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (id)textLabel;
- (void)traitCollectionDidChange:(id)arg1;

@end
