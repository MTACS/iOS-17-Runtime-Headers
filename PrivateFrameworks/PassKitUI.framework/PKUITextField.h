
@interface PKUITextField : UITextField {
    bool  _allowsTextFromCamera;
}

@property (nonatomic) bool allowsTextFromCamera;

- (bool)allowsTextFromCamera;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)init;
- (void)setAllowsTextFromCamera:(bool)arg1;

@end
