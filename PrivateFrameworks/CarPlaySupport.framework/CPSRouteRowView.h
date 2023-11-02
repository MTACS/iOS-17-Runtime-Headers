
@interface CPSRouteRowView : UIView {
    UIImageView * _checkmarkView;
    CPSAbridgableLabel * _detail;
    UIView * _focusBackground;
    <CPSRouteRowInteracting> * _interactionDelegate;
    UIStackView * _labelStackView;
    CPRouteChoice * _representedRouteChoice;
    CPSInvisibleButton * _rowButton;
    bool  _selected;
    CPSAbridgableLabel * _title;
}

@property (nonatomic, readonly) UIImageView *checkmarkView;
@property (nonatomic, readonly) CPSAbridgableLabel *detail;
@property (nonatomic, retain) UIView *focusBackground;
@property (nonatomic) <CPSRouteRowInteracting> *interactionDelegate;
@property (nonatomic, retain) UIStackView *labelStackView;
@property (nonatomic, retain) CPRouteChoice *representedRouteChoice;
@property (nonatomic, retain) CPSInvisibleButton *rowButton;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, readonly) CPSAbridgableLabel *title;

- (void).cxx_destruct;
- (void)_updateAppearance;
- (id)checkmarkView;
- (id)detail;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)focusBackground;
- (void)handleRowSelection:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)interactionDelegate;
- (bool)isSelected;
- (id)labelStackView;
- (id)representedRouteChoice;
- (id)rowButton;
- (void)setFocusBackground:(id)arg1;
- (void)setInteractionDelegate:(id)arg1;
- (void)setLabelStackView:(id)arg1;
- (void)setRepresentedRouteChoice:(id)arg1;
- (void)setRowButton:(id)arg1;
- (void)setSelected:(bool)arg1;
- (id)title;
- (void)traitCollectionDidChange:(id)arg1;

@end
