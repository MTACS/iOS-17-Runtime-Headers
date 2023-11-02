
@interface SeymourUI.DurationFilterCell : UICollectionViewCell {
    void delegate;
    void durationLabel;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  itemInfo;
    void labelLayoutGuide;
    void layout;
    void minLabel;
    void tickView;
    void unitsVerticalConstraint;
}

@property (nonatomic, readonly) UILabel *durationLabel;

- (void).cxx_destruct;
- (void)accessibilityApplyState:(bool)arg1 disabled:(bool)arg2;
- (id)durationLabel;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)textSizeChanged:(id)arg1;

@end
