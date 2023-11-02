
@interface HKTimeScopeControl : UIControl {
    long long  _selectedTimeScope;
    bool  _shortTextStyle;
    NSArray * _timeScopes;
}

@property (nonatomic) long long selectedTimeScope;

+ (id)controlWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 timeScopes:(id)arg2;

- (void).cxx_destruct;
- (long long)_indexForTimeScope:(long long)arg1;
- (long long)_timeScopeForIndex:(long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 timeScopes:(id)arg2;
- (double)minimumWidth;
- (long long)selectedTimeScope;
- (void)setSelectedTimeScope:(long long)arg1;

@end
