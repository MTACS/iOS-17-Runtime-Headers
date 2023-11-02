
@interface PKSegmentedBarView : UIView {
    unsigned int  _axis;
    UIImageView * _bar;
    double  _barLength;
    bool  _blurDisabled;
    <PKSegmentedBarConfiguration> * _configuration;
    _Atomic unsigned long long  _generationCounter;
    UIImage * _image;
    id /* block */  _imageCompletion;
    double  _maximumLength;
    double  _minimumLength;
    UIView * _placeholder;
    UIColor * _placeholderColor;
    bool  _roundBaselineCorners;
    bool  _showPlaceholder;
    bool  _useSmallCornerRadius;
}

@property (getter=isBlurDisabled, nonatomic) bool blurDisabled;
@property (nonatomic, readonly) double minimumLength;
@property (nonatomic, retain) UIColor *placeholderColor;
@property (nonatomic) bool roundBaselineCorners;
@property (nonatomic) bool showPlaceholder;
@property (nonatomic) bool useSmallCornerRadius;

- (void).cxx_destruct;
- (void)_callCompletion;
- (void)_generateImageForConfiguration:(id)arg1 barLength:(double)arg2 maximumLength:(double)arg3 synchronous:(bool)arg4;
- (void)_updateImageWithImage:(id)arg1;
- (void)_updatePlaceholder;
- (void)configureWithBarConfiguration:(id)arg1 axis:(unsigned int)arg2 maximumLength:(double)arg3 barLength:(double)arg4 synchronous:(bool)arg5 completion:(id /* block */)arg6;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isBlurDisabled;
- (void)layoutSubviews;
- (double)minimumLength;
- (id)placeholderColor;
- (bool)roundBaselineCorners;
- (void)setBlurDisabled:(bool)arg1;
- (void)setPlaceholderColor:(id)arg1;
- (void)setRoundBaselineCorners:(bool)arg1;
- (void)setShowPlaceholder:(bool)arg1;
- (void)setUseSmallCornerRadius:(bool)arg1;
- (bool)showPlaceholder;
- (bool)useSmallCornerRadius;

@end
