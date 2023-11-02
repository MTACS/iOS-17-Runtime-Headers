
@interface TeaUI.BlockBarButtonItem : UIBarButtonItem {
    void actionHandler;
    void customContentView;
    void identifier;
    void shouldRecolor;
}

@property (nonatomic, copy) NSString *accessibilityLabel;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)barButtonItemPressedWithSender:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setAccessibilityLabel:(id)arg1;

@end
