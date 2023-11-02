
@interface BKUIPearlInstructionView : UIView {
    bool  _darkMode;
    NSString * _detail;
    UILabel * _detailLabel;
    NSString * _instruction;
    UILabel * _instructionLabel;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _labelsHorizontalMargin;
    NSLayoutConstraint * _labelsWidthConstraint;
}

@property (nonatomic) bool darkMode;
@property (nonatomic, retain) NSString *detail;
@property (nonatomic) UILabel *detailLabel;
@property (nonatomic, retain) NSString *instruction;
@property (nonatomic) UILabel *instructionLabel;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *instructionTextTopAnchor;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } labelsHorizontalMargin;
@property (nonatomic, retain) NSLayoutConstraint *labelsWidthConstraint;

- (void).cxx_destruct;
- (void)_configureConstraints;
- (bool)darkMode;
- (id)detail;
- (id)detailLabel;
- (id)init;
- (id)instruction;
- (id)instructionLabel;
- (id)instructionTextTopAnchor;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })labelsHorizontalMargin;
- (id)labelsWidthConstraint;
- (void)setDarkMode:(bool)arg1;
- (void)setDetail:(id)arg1;
- (void)setDetailLabel:(id)arg1;
- (void)setInstruction:(id)arg1;
- (void)setInstructionLabel:(id)arg1;
- (void)setLabelsHorizontalMargin:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLabelsWidthConstraint:(id)arg1;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
