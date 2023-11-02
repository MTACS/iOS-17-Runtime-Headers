
@interface CKAppIconView : UIView {
    UIView * _activityItemView;
    long long  _appName;
    NSMutableArray * _constraints;
    UIView * _contactItemView;
}

@property (nonatomic, retain) UIView *activityItemView;
@property (nonatomic) long long appName;
@property (nonatomic, retain) NSMutableArray *constraints;
@property (nonatomic, retain) UIView *contactItemView;

- (void).cxx_destruct;
- (id)activityItemView;
- (long long)appName;
- (id)constraints;
- (id)contactItemView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withAppName:(long long)arg2;
- (void)setActivityItemView:(id)arg1;
- (void)setAppName:(long long)arg1;
- (void)setConstraints:(id)arg1;
- (void)setContactItemView:(id)arg1;
- (void)setUpSubviews;
- (void)updateConstraints;

@end
