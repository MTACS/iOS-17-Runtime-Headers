
@interface HealthExperienceUI.MessageWithActionTileViewWithImage : UIView {
    void baseIdentifier;
    void configuration;
    void imageView;
    void imageViewLeadingConstraint;
    void messageTileView;
    void messageTileViewLeadingConstraint;
    void messageTileViewTopConstraint;
}

@property (nonatomic, readonly) _TtC18HealthExperienceUI25MessageWithActionTileView *messageTileView;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)messageTileView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;

@end
