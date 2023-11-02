
@interface WDDataTableViewCell : UITableViewCell {
    UIFont * _bodyFont;
    NSString * _dateString;
    UILabel * _detailTextLabel;
    NSString * _displayValue;
    bool  _displayValueAdjustsFontSizeToFitWidth;
    UIImageView * _imageView;
    HKSource * _source;
    UILabel * _textLabel;
}

@property (nonatomic, retain) UIFont *bodyFont;
@property (nonatomic, retain) NSString *dateString;
@property (nonatomic, retain) NSString *displayValue;
@property (nonatomic) bool displayValueAdjustsFontSizeToFitWidth;
@property (nonatomic, retain) HKSource *source;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)bodyFont;
- (id)dateString;
- (void)dealloc;
- (id)detailTextLabel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })detailTextLabelFrame;
- (id)displayValue;
- (bool)displayValueAdjustsFontSizeToFitWidth;
- (id)imageView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageViewFrame;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setBodyFont:(id)arg1;
- (void)setDateString:(id)arg1;
- (void)setDisplayValue:(id)arg1;
- (void)setDisplayValueAdjustsFontSizeToFitWidth:(bool)arg1;
- (void)setSource:(id)arg1;
- (id)source;
- (id)textLabel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textLabelFrame;

@end
