
@interface HUCCInfoMosaicGridView : UIView {
    UILabel * _actionLabel;
    HUCCFakeMosaicGridView * _backgroundGridView;
    <HUProvidesMosaicFrames> * _frameDelegate;
    UIImageView * _iconView;
    UILabel * _infoLabel;
    NSArray * _infoMosaicConstraints;
    UIStackView * _stackView;
}

@property (nonatomic, retain) UILabel *actionLabel;
@property (nonatomic, retain) HUCCFakeMosaicGridView *backgroundGridView;
@property (nonatomic) <HUProvidesMosaicFrames> *frameDelegate;
@property (nonatomic, retain) UIImageView *iconView;
@property (nonatomic, retain) UILabel *infoLabel;
@property (nonatomic, retain) NSArray *infoMosaicConstraints;
@property (nonatomic, retain) HUMosaicLayoutGeometry *mosaicLayoutGeometry;
@property (nonatomic, retain) UIStackView *stackView;

- (void).cxx_destruct;
- (void)_invalidateConstraints;
- (void)_setupInfoMosaicView;
- (id)actionLabel;
- (id)backgroundGridView;
- (id)frameDelegate;
- (id)iconView;
- (id)infoLabel;
- (id)infoMosaicConstraints;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)mosaicLayoutGeometry;
- (void)resetView;
- (void)setActionLabel:(id)arg1;
- (void)setBackgroundGridView:(id)arg1;
- (void)setFrameDelegate:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setInfoLabel:(id)arg1;
- (void)setInfoMosaicConstraints:(id)arg1;
- (void)setMosaicLayoutGeometry:(id)arg1;
- (void)setStackView:(id)arg1;
- (id)stackView;
- (void)updateConstraints;
- (void)updateUIWithInfoText:(id)arg1 andActionText:(id)arg2;

@end
