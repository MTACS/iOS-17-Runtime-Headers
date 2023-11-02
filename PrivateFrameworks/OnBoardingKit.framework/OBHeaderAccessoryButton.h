
@interface OBHeaderAccessoryButton : UIButton {
    bool  _underlineLinks;
}

@property (nonatomic) bool underlineLinks;

+ (id)accessoryButton;
+ (id)buttonWithType:(long long)arg1;

- (id)_fontTextStyle;
- (void)_updateText;
- (void)setUnderlineLinks:(bool)arg1;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)underlineLinks;

@end
