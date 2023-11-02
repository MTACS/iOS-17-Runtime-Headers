
@interface PreferencesDoubleTwoPartValueCell : PreferencesTwoPartValueCell {
    UILabel * _textLabel2;
    TwoPartTextLabel * _twoPartLabel2;
}

@property (nonatomic, readonly, retain) UILabel *textLabel2;
@property (nonatomic, readonly, retain) TwoPartTextLabel *twoPartTextLabel2;

- (void).cxx_destruct;
- (void)_layoutSubviewsCore;
- (void)checkValueWidths;
- (void)layoutText:(id)arg1 andValue:(id)arg2;
- (id)textLabel2;
- (id)twoPartTextLabel2;

@end
