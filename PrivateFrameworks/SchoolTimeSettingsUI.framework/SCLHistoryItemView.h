
@interface SCLHistoryItemView : UIView {
    SCLHistoryGroup * _historyGroup;
    SCLUnlockHistoryItemFormatter * _historyItemFormatter;
    UILabel * _intervalLabel;
    SCLTimeIntervalsFormatter * _intervalsFormatter;
    UILabel * _label;
    NSArray * _unconditionalConstraints;
    NSArray * _verticalLayoutConstraints;
}

@property (nonatomic, copy) SCLHistoryGroup *historyGroup;
@property (nonatomic, retain) SCLUnlockHistoryItemFormatter *historyItemFormatter;
@property (nonatomic, retain) UILabel *intervalLabel;
@property (nonatomic, retain) SCLTimeIntervalsFormatter *intervalsFormatter;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic, retain) NSArray *unconditionalConstraints;
@property (nonatomic, retain) NSArray *verticalLayoutConstraints;

- (void).cxx_destruct;
- (id)historyGroup;
- (id)historyItemFormatter;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)intervalLabel;
- (id)intervalsFormatter;
- (id)label;
- (void)setHistoryGroup:(id)arg1;
- (void)setHistoryItemFormatter:(id)arg1;
- (void)setIntervalLabel:(id)arg1;
- (void)setIntervalsFormatter:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setUnconditionalConstraints:(id)arg1;
- (void)setVerticalLayoutConstraints:(id)arg1;
- (id)unconditionalConstraints;
- (void)updateConstraints;
- (id)verticalLayoutConstraints;
- (id)viewForFirstBaselineLayout;

@end
