
@interface OBPrivacyButton : UIButton {
    bool  _underlineLinks;
}

@property (nonatomic) bool underlineLinks;

+ (id)buttonWithType:(long long)arg1;

- (void)setUnderlineLinks:(bool)arg1;
- (void)tintColorDidChange;
- (bool)underlineLinks;

@end
