
@interface PUWallpaperSettlingEffectDebugView : UIView {
    UIButton * _button;
    UILabel * _label;
    id /* block */  _onFileRadar;
    <PISegmentationItem> * _segmentationItem;
}

@property (nonatomic, retain) UIButton *button;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic, copy) id /* block */ onFileRadar;
@property (nonatomic, retain) <PISegmentationItem> *segmentationItem;

- (void).cxx_destruct;
- (id)button;
- (void)fileRadarButtonTapped;
- (id)generateText;
- (id)initWithSegmentationItem:(id)arg1;
- (id)label;
- (void)layoutSubviews;
- (id /* block */)onFileRadar;
- (id)segmentationItem;
- (void)setButton:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setOnFileRadar:(id /* block */)arg1;
- (void)setSegmentationItem:(id)arg1;
- (void)viewTapped;

@end
