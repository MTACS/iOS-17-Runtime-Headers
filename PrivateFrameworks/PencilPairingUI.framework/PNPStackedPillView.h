
@interface PNPStackedPillView : UIView <PNPDeviceStateConfigurable> {
    UILabel * _bottomLabel;
    UIColor * _bottomLabelColor;
    NSString * _bottomLabelString;
    UIView * _contentAreaView;
    PNPDeviceState * _deviceState;
    UILabel * _topLabel;
    NSString * _topLabelString;
}

@property (nonatomic, retain) UIColor *bottomLabelColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) PNPDeviceState *deviceState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureConstraints;
- (id)bottomLabelColor;
- (id)deviceState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 topString:(id)arg2 bottomString:(id)arg3;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setBottomLabelColor:(id)arg1;
- (void)setDeviceState:(id)arg1;

@end
