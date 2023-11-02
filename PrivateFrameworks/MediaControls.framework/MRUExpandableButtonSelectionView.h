
@interface MRUExpandableButtonSelectionView : UIView {
    bool  _enabled;
    bool  _expanded;
    MediaControlsExpandableButtonOption * _option;
    MRUCAPackageView * _packageView;
}

@property (getter=isEnabled, nonatomic) bool enabled;
@property (getter=isExpanded, nonatomic) bool expanded;
@property (nonatomic, retain) MediaControlsExpandableButtonOption *option;
@property (nonatomic, retain) MRUCAPackageView *packageView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEnabled;
- (bool)isExpanded;
- (void)layoutSubviews;
- (id)option;
- (id)packageView;
- (void)setEnabled:(bool)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setOption:(id)arg1;
- (void)setPackageView:(id)arg1;
- (void)updateVisibility;

@end
