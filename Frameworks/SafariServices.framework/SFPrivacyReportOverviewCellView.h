
@interface SFPrivacyReportOverviewCellView : UIView <SFPrivacyReportGridItem> {
    UIView * _bottomHairline;
    <SFPrivacyReportGridItemDelegate> * _delegate;
    unsigned long long  _gridPosition;
    double  _maxWidth;
    UIView * _topHairline;
    UIView * _trailingHairline;
    bool  _usesInsetStyle;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFPrivacyReportGridItemDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long gridPosition;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maxWidth;
@property (readonly) Class superclass;
@property (nonatomic) bool usesInsetStyle;

- (void).cxx_destruct;
- (void)_updateHairlinesIfNeeded;
- (void)_updateLayoutMargins;
- (id)delegate;
- (unsigned long long)gridPosition;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)maxWidth;
- (void)setDelegate:(id)arg1;
- (void)setGridPosition:(unsigned long long)arg1;
- (void)setMaxWidth:(double)arg1;
- (void)setUsesInsetStyle:(bool)arg1;
- (bool)usesInsetStyle;
- (void)willMoveToWindow:(id)arg1;

@end
