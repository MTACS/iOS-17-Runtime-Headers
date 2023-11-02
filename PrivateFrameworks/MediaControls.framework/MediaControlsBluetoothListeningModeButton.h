
@interface MediaControlsBluetoothListeningModeButton : MediaControlsExpandableButton {
    NSSet * _availableListeningModes;
    UIColor * _offColor;
}

@property (nonatomic, retain) NSSet *availableListeningModes;
@property (nonatomic, retain) UIColor *offColor;
@property (nonatomic, retain) NSString *selectedListeningMode;

- (void).cxx_destruct;
- (id)availableListeningModes;
- (id)initForControlCenter;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)offColor;
- (void)playRequiresBothBudsInEarErrorHaptic;
- (id)selectedListeningMode;
- (void)setAvailableListeningModes:(id)arg1;
- (void)setOffColor:(id)arg1;
- (void)setSelectedListeningMode:(id)arg1;
- (void)setSelectedListeningMode:(id)arg1 animated:(bool)arg2;

@end
