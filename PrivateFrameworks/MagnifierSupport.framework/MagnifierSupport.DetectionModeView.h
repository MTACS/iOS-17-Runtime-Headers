
@interface MagnifierSupport.DetectionModeView : UIView {
    void _recordButton;
    void _restartButton;
    void _rotationSubscription;
    void _tapToRadarButton;
    void arDelegate;
    void buttonColumn;
    void buttonMap;
    void captionLabel;
    void detectionControls;
    void detectionLabel;
    void detectionMarqueeLabel;
    void edgeInsets;
    void kDebugButtonsBottom;
    void kDetectionFont;
    void kRecordButtonMargin;
    void kRecordButtonSize;
    void kRestartButtonSize;
    void kSafeAreaBottom;
    void kTapToRadarButtonMargin;
    void kTapToRadarButtonSize;
    void landscapeButtonColumn;
    void landscapeButtonMap;
    void landscapeCaptionLabel;
    void landscapeCaptionView;
    void navBarDelegate;
}

@property (nonatomic, copy) NSArray *accessibilityCustomActions;

- (void).cxx_destruct;
- (id)_accessibilitySupplementaryFooterViews;
- (id)accessibilityCustomActions;
- (bool)accessibilityPerformMagicTap;
- (void)didTapRecordButton:(id)arg1;
- (void)didTapRestartButton:(id)arg1;
- (void)didTapTapToRadarButton:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)pauseSpeech;
- (void)setAccessibilityCustomActions:(id)arg1;
- (void)toggleButtonColumnDisplay;
- (void)toggleDetection;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
