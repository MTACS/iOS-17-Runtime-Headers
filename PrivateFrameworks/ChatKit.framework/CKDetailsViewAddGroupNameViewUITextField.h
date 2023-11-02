
@interface CKDetailsViewAddGroupNameViewUITextField : UITextField {
    bool  _canResignFirstResponderInternal;
}

@property (nonatomic) bool canResignFirstResponderInternal;

- (bool)canResignFirstResponder;
- (bool)canResignFirstResponderInternal;
- (void)setCanResignFirstResponderInternal:(bool)arg1;

@end
