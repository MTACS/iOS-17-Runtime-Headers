
@interface OBTextAccessoryButton : UIButton {
    NSString * _textStyle;
}

@property (nonatomic) NSString *textStyle;

+ (id)accessoryButtonWithTextStyle:(id)arg1;

- (void)setTextStyle:(id)arg1;
- (id)textStyle;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;

@end
