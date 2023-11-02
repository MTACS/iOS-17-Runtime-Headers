
@interface SearchUIRequestButton : SearchUIAccessoryViewController {
    SFCommand * _command;
    TLKImageView * _imageView;
    int  _lastState;
    TLKStackView * _stackView;
    TLKStoreButton * _viewButton;
}

@property (nonatomic, retain) SFCommand *command;
@property (nonatomic, retain) TLKImageView *imageView;
@property int lastState;
@property (nonatomic, retain) TLKStackView *stackView;
@property (nonatomic, retain) TLKStoreButton *viewButton;

- (void).cxx_destruct;
- (void)_updateButtonState:(int)arg1;
- (void)buttonPressed;
- (id)command;
- (id)imageView;
- (id)imageWithSymbolName:(id)arg1 accessibilityDescription:(id)arg2;
- (int)lastState;
- (void)setCommand:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setLastState:(int)arg1;
- (void)setStackView:(id)arg1;
- (void)setViewButton:(id)arg1;
- (id)setupView;
- (bool)shouldTopAlignForAccessibilityContentSizes;
- (id)stackView;
- (void)updateButtonState:(bool)arg1 withState:(int)arg2;
- (id)viewButton;

@end
