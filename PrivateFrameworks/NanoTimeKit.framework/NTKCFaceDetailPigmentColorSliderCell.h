
@interface NTKCFaceDetailPigmentColorSliderCell : NTKCFaceDetailRowActionCell <NTKColorSliderDelegate> {
    <NTKCFaceDetailPigmentColorSliderCellDelegate> * _delegate;
    NTKColorSlider * _slider;
}

@property (nonatomic) <NTKCFaceDetailPigmentColorSliderCellDelegate> *delegate;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)colorSlider:(id)arg1 valueChanged:(double)arg2 phase:(long long)arg3;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (double)rowHeight;
- (void)setColorFraction:(double)arg1 animated:(bool)arg2;
- (void)setColors:(id)arg1 animated:(bool)arg2;
- (void)setDelegate:(id)arg1;

@end
