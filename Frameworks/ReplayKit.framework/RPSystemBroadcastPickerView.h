
@interface RPSystemBroadcastPickerView : UIView <NSCoding> {
    UIButton * _broadcastPickerButton;
    NSString * _preferredExtension;
    bool  _showsMicrophoneButton;
}

@property (nonatomic, retain) UIButton *broadcastPickerButton;
@property (nonatomic, retain) NSString *preferredExtension;
@property (nonatomic) bool showsMicrophoneButton;

- (void).cxx_destruct;
- (void)addBroadcastPickerButton;
- (id)broadcastPickerButton;
- (void)buttonPressed:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)preferredExtension;
- (void)screenCaptureChanged;
- (void)setBroadcastPickerButton:(id)arg1;
- (void)setPreferredExtension:(id)arg1;
- (void)setShowsMicrophoneButton:(bool)arg1;
- (bool)showsMicrophoneButton;

@end
