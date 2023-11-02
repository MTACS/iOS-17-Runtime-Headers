
@interface PKReaderModeAnimationView : UIView {
    bool  _isPhoneTarget;
    CAPackage * _package;
    CALayer * _phoneLayer;
    unsigned long long  _state;
    CAStateController * _stateController;
}

@property (nonatomic) unsigned long long state;

- (void).cxx_destruct;
- (void)_setState:(unsigned long long)arg1 animated:(bool)arg2;
- (unsigned long long)animationStateForProvisioningViewState:(unsigned long long)arg1;
- (id)initWithAssetName:(id)arg1 forPhoneTarget:(bool)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 assetName:(id)arg2 forPhoneTarget:(bool)arg3;
- (void)setDigitalCardImage:(id)arg1;
- (void)setImage:(id)arg1 forPublishedObjectWithName:(id)arg2;
- (void)setPlasticCardImage:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setState:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setWatchAssetImage:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)state;

@end
