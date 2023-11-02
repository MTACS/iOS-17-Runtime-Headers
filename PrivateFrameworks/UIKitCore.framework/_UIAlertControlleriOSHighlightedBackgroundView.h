
@interface _UIAlertControlleriOSHighlightedBackgroundView : UIView <UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying> {
    UIVisualEffectView * _effectView;
    long long  _style;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureWithStyle:(long long)arg1;
- (id)init;
- (id)initWithStyle:(long long)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setPressed:(bool)arg1;
- (void)setRoundedCornerPosition:(unsigned long long)arg1;
- (long long)style;

@end
