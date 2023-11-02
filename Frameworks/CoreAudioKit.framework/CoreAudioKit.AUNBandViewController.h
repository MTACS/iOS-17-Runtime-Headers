
@interface CoreAudioKit.AUNBandViewController : CoreAudioKit.AURightEdgeControlsBaseViewController {
    void activeControl;
    void controls;
    void hintView;
    void noParamDisplayed;
    void numBands;
}

- (void).cxx_destruct;
- (void)bandEnabledChangedWithNotification:(id)arg1;
- (void)bandSelectionChangedWithNotification:(id)arg1;
- (void)globalGainChangedWithNotification:(id)arg1;
- (void)globalGainKnobReleasedWithNotification:(id)arg1;
- (void)globalGainKnobTouchedWithNotification:(id)arg1;
- (void)hintDismissedWithRecognizer:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)typeControlChangedWithSender:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
