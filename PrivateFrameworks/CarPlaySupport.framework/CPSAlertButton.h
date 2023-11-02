
@interface CPSAlertButton : CPSButton {
    CPAlertAction * _alertAction;
}

@property (nonatomic, retain) CPAlertAction *alertAction;

+ (id)buttonWithCPAlertAction:(id)arg1;

- (void).cxx_destruct;
- (id)_buttonFont;
- (id)_externalUnfocusedBorderColor;
- (id)alertAction;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)setAlertAction:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
