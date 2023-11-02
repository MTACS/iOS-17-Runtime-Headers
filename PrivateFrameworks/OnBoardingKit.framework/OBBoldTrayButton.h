
@interface OBBoldTrayButton : OBTrayButton {
    NSNumber * _buttonStateRequiredHeight;
}

@property (nonatomic, retain) NSNumber *buttonStateRequiredHeight;

+ (id)boldButton;

- (void).cxx_destruct;
- (id)boldConfiguration;
- (id)buttonStateRequiredHeight;
- (void)hidesBusyIndicator;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setButtonStateRequiredHeight:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)showsBusyIndicator;
- (void)tintColorDidChange;
- (void)updateConfiguration;

@end
