
@interface _SFReportTranslationIssueReportButtonCell : UICollectionViewCell {
    UIButton * _button;
    <_SFReportTranslationIssueReportButtonCellDelegate> * _delegate;
}

@property (nonatomic, retain) UIButton *button;
@property (nonatomic) <_SFReportTranslationIssueReportButtonCellDelegate> *delegate;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_reportTranslationIssue:(id)arg1;
- (id)button;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBackgroundColorForEnabledState:(bool)arg1;
- (void)setButton:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
