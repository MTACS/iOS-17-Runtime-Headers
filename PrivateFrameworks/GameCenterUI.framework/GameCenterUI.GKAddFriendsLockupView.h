
@interface GameCenterUI.GKAddFriendsLockupView : UIView {
    void addFriendsHandler;
    void button;
    void imageView;
    void metricsPageId;
    void metricsPageType;
    void textLabel;
}

@property (nonatomic, copy) id /* block */ addFriendsHandler;

- (void).cxx_destruct;
- (id /* block */)addFriendsHandler;
- (void)didTapButton:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 friendState:(long long)arg2 metricsPageId:(id)arg3 metricsPageType:(id)arg4;
- (void)layoutSubviews;
- (struct JUMeasurements { double x1; double x2; double x3; double x4; })measurementsWithFitting:(struct CGSize { double x1; double x2; })arg1 in:(id)arg2;
- (void)setAddFriendsHandler:(id /* block */)arg1;

@end
