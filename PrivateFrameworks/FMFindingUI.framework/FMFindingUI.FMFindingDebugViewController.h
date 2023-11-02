
@interface FMFindingUI.FMFindingDebugViewController : UIViewController <UIDocumentPickerDelegate> {
    void autoplayButton;
    void autoplayTimer;
    void backgroundLayer;
    void bottomStackView;
    void closeButton;
    void coldStateButton;
    void connectingStateButton;
    void delegate;
    void disconnectedStateButton;
    void dotScaleSlider;
    void findingViewController;
    void foundStateButton;
    void hapticForceSlider;
    void hideButton;
    void hotStateButton;
    void loadButton;
    void middleStackView;
    void mockSession;
    void nextStateButton;
    void prevStateButton;
    void pulsePeriodSlider;
    void ringFactorSlider;
    void ringOpacitySlider;
    void saveButton;
    void stackView;
    void topStackView;
    void warmStateButton;
    void warmerStateButton;
}

- (void).cxx_destruct;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)handleWithButton:(id)arg1;
- (void)handleWithSlider:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLayoutSubviews;

@end
