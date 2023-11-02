
@interface HUISliderConfig : NSObject {
    bool  _isLargeText;
    bool  _isSubmenuSlider;
    UIImage * _maxImage;
    UIImage * _minImage;
    UILabel * _minTextLabel;
    bool  _providesOwnSeparator;
    long long  _style;
    UILabel * _valueLabel;
}

@property (nonatomic) bool isLargeText;
@property (nonatomic) bool isSubmenuSlider;
@property (nonatomic, retain) UIImage *maxImage;
@property (nonatomic, retain) UIImage *minImage;
@property (nonatomic, retain) UILabel *minTextLabel;
@property (nonatomic) bool providesOwnSeparator;
@property (nonatomic) long long style;
@property (nonatomic, retain) UILabel *valueLabel;

- (void).cxx_destruct;
- (bool)isLargeText;
- (bool)isSubmenuSlider;
- (id)maxImage;
- (id)minImage;
- (id)minTextLabel;
- (bool)providesOwnSeparator;
- (void)setIsLargeText:(bool)arg1;
- (void)setIsSubmenuSlider:(bool)arg1;
- (void)setMaxImage:(id)arg1;
- (void)setMinImage:(id)arg1;
- (void)setMinTextLabel:(id)arg1;
- (void)setProvidesOwnSeparator:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (void)setValueLabel:(id)arg1;
- (long long)style;
- (id)valueLabel;

@end
