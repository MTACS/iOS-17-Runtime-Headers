
@interface HKSimulatedWatchView : UIView {
    UIView * _containerView;
    UIView * _watchScreenView;
}

@property (nonatomic, retain) UIView *containerView;
@property (nonatomic, retain) UIView *watchScreenView;

- (void).cxx_destruct;
- (id)containerView;
- (id)initWithIconImage:(id)arg1 titleText:(id)arg2 detailText:(id)arg3 tintColor:(id)arg4;
- (id)initWithWatchView:(id)arg1;
- (void)layoutSubviews;
- (void)setContainerView:(id)arg1;
- (void)setWatchScreenView:(id)arg1;
- (id)watchScreenView;

@end
