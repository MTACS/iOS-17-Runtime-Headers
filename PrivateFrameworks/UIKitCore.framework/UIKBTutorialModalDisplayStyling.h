
@interface UIKBTutorialModalDisplayStyling : NSObject {
    UIColor * _backgroundColor;
    NSArray * _backgroundEffects;
    UIColor * _buttonTextColor;
    UIColor * _mainTextColor;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) NSArray *backgroundEffects;
@property (nonatomic, retain) UIColor *buttonTextColor;
@property (nonatomic, retain) UIColor *mainTextColor;

- (void).cxx_destruct;
- (id)backgroundBlurEffects:(long long)arg1;
- (id)backgroundColor;
- (id)backgroundEffects;
- (id)buttonTextColor;
- (id)initWithKeyboardAppearance:(long long)arg1;
- (id)mainTextColor;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundEffects:(id)arg1;
- (void)setButtonTextColor:(id)arg1;
- (void)setMainTextColor:(id)arg1;

@end
