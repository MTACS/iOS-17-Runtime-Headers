
@interface UIPrintQualityView : UIView {
    UILabel * _bestLabel;
    UILabel * _draftLabel;
    UILabel * _normalLabel;
    UIPrintInfo * _printInfo;
    UIPrintSegmentedSlider * _qualitySlider;
}

@property (nonatomic, retain) UILabel *bestLabel;
@property (nonatomic, retain) UILabel *draftLabel;
@property (nonatomic, retain) UILabel *normalLabel;
@property (nonatomic, retain) UIPrintInfo *printInfo;
@property (nonatomic, retain) UIPrintSegmentedSlider *qualitySlider;

- (void).cxx_destruct;
- (id)bestLabel;
- (void)changeQuality:(id)arg1;
- (void)dealloc;
- (id)draftLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 printInfo:(id)arg2;
- (void)loadViews;
- (id)normalLabel;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)printInfo;
- (id)qualitySlider;
- (void)setBestLabel:(id)arg1;
- (void)setDraftLabel:(id)arg1;
- (void)setNormalLabel:(id)arg1;
- (void)setPrintInfo:(id)arg1;
- (void)setQualitySlider:(id)arg1;
- (void)updateFromPrintInfo;

@end
