
@interface HRImageLabel : UIView {
    bool  _boldText;
    long long  _currentUserInterfaceStyle;
    UIImage * _image;
    long long  _imageAlignment;
    NSLayoutConstraint * _imageLeadingConstraint;
    double  _imageLeadingSpacing;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    NSArray * _imageTextAlignmentConstraints;
    NSLayoutConstraint * _imageTrailingConstraint;
    double  _imageTrailingSpacing;
    UIImageView * _imageView;
    NSString * _text;
    UILabel * _textLabel;
    id /* block */  _userInterfaceStyleChanged;
}

@property (nonatomic) bool boldText;
@property (nonatomic) long long currentUserInterfaceStyle;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) long long imageAlignment;
@property (nonatomic, retain) NSLayoutConstraint *imageLeadingConstraint;
@property (nonatomic) double imageLeadingSpacing;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, retain) NSArray *imageTextAlignmentConstraints;
@property (nonatomic, retain) NSLayoutConstraint *imageTrailingConstraint;
@property (nonatomic) double imageTrailingSpacing;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) UILabel *textLabel;
@property (nonatomic, copy) id /* block */ userInterfaceStyleChanged;

- (void).cxx_destruct;
- (bool)_isTextTallerThanImage;
- (void)_setUpConstraints;
- (void)_setUpUI;
- (id)_textLabelBoldFont;
- (id)_textLabelFont;
- (id)_textLabelFontStyle;
- (void)_updateCurrentUserInterfaceStyleIfNeeded;
- (void)_updateImageTextAlignmentConstraints;
- (void)_updateTextLabelFont;
- (bool)boldText;
- (long long)currentUserInterfaceStyle;
- (id)image;
- (long long)imageAlignment;
- (id)imageLeadingConstraint;
- (double)imageLeadingSpacing;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)imageTextAlignmentConstraints;
- (id)imageTrailingConstraint;
- (double)imageTrailingSpacing;
- (id)imageView;
- (id)initWIthImage:(id)arg1 text:(id)arg2;
- (id)initWithImage:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 text:(id)arg3;
- (id)initWithImage:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 text:(id)arg3 userInterfaceStyleChanged:(id /* block */)arg4;
- (void)layoutSubviews;
- (void)setBoldText:(bool)arg1;
- (void)setCurrentUserInterfaceStyle:(long long)arg1;
- (void)setImage:(id)arg1;
- (void)setImageAlignment:(long long)arg1;
- (void)setImageLeadingConstraint:(id)arg1;
- (void)setImageLeadingSpacing:(double)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setImageTextAlignmentConstraints:(id)arg1;
- (void)setImageTrailingConstraint:(id)arg1;
- (void)setImageTrailingSpacing:(double)arg1;
- (void)setImageView:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (void)setUserInterfaceStyleChanged:(id /* block */)arg1;
- (id)text;
- (id)textLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (id /* block */)userInterfaceStyleChanged;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
