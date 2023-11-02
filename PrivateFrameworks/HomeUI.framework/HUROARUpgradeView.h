
@interface HUROARUpgradeView : UIView <HFHomeManagerObserver> {
    UIButton * _button;
    NSMutableArray * _constraints;
    UIImageView * _deviceImageView;
    HMHome * _home;
    UILabel * _subtitle;
    UILabel * _title;
    unsigned long long  _upgradeViewReason;
}

@property (nonatomic, retain) UIButton *button;
@property (nonatomic, retain) NSMutableArray *constraints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIImageView *deviceImageView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, retain) UILabel *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *title;
@property (nonatomic) unsigned long long upgradeViewReason;

- (void).cxx_destruct;
- (id)_buttonAction;
- (id)_buttonString;
- (void)_didSwitchToHome:(id)arg1;
- (id)_subtitleString;
- (id)_titleString;
- (id)button;
- (id)constraints;
- (id)deviceImageView;
- (id)home;
- (void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3;
- (id)initWithUpgradeViewReason:(unsigned long long)arg1 home:(id)arg2;
- (void)layoutSubviews;
- (void)setButton:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)setDeviceImageView:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUpgradeViewReason:(unsigned long long)arg1;
- (id)subtitle;
- (id)title;
- (unsigned long long)upgradeViewReason;

@end
