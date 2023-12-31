
@protocol OKClickWheelViewDelegate <NSObject>

@required

- (void)clickWheelViewClosePressed:(OKClickWheelView *)arg1;
- (void)clickWheelViewMenuButtonPressed:(OKClickWheelView *)arg1;
- (bool)clickWheelViewShouldAppear;
- (void)clickWheelViewWillAppear:(OKClickWheelView *)arg1;
- (void)clickWheelViewWillDisappear:(OKClickWheelView *)arg1;
- (bool)shouldShowPlayIcon;

@end
