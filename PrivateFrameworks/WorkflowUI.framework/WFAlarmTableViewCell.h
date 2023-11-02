
@interface WFAlarmTableViewCell : UITableViewCell {
    MTUIAlarmView * _alarmView;
    bool  _enabled;
}

@property (nonatomic, readonly) MTUIAlarmView *alarmView;
@property (nonatomic) bool enabled;

- (void).cxx_destruct;
- (id)alarmView;
- (bool)enabled;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)refreshUI:(id)arg1 animated:(bool)arg2;
- (void)setEnabled:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
