
@interface OBStackedIconTextList : UIStackView {
    unsigned long long  _dataDetectorTypes;
    NSMutableArray * _entries;
    double  _iconTextPadding;
    double  _itemSpacing;
}

@property (nonatomic) unsigned long long dataDetectorTypes;
@property (nonatomic) double iconTextPadding;

- (void).cxx_destruct;
- (void)addEntryWithIcon:(id)arg1 iconSize:(struct CGSize { double x1; double x2; })arg2 attributedText:(id)arg3;
- (void)addEntryWithIcon:(id)arg1 iconSize:(struct CGSize { double x1; double x2; })arg2 text:(id)arg3;
- (unsigned long long)dataDetectorTypes;
- (double)iconTextPadding;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDataDetectorTypes:(unsigned long long)arg1;
- (void)setIconTextPadding:(double)arg1;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
