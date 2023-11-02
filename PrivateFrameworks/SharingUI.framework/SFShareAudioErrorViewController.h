
@interface SFShareAudioErrorViewController : SFShareAudioBaseViewController {
    UIButton * _dismissButton;
    NSError * _error;
    UILabel * _infoLabel;
    UILabel * _internalLabel;
}

@property (nonatomic, retain) UIButton *dismissButton;
@property (nonatomic, copy) NSError *error;
@property (nonatomic, retain) UILabel *infoLabel;
@property (nonatomic, retain) UILabel *internalLabel;

- (void).cxx_destruct;
- (id)dismissButton;
- (id)error;
- (void)eventDismiss:(id)arg1;
- (id)infoLabel;
- (id)internalLabel;
- (void)setDismissButton:(id)arg1;
- (void)setError:(id)arg1;
- (void)setInfoLabel:(id)arg1;
- (void)setInternalLabel:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
