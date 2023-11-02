
@interface FBKQuestionCellTextView : UITextView {
    unsigned long long  _characterLimit;
}

@property (nonatomic) unsigned long long characterLimit;

- (bool)canBecomeFirstResponder;
- (unsigned long long)characterLimit;
- (void)setCharacterLimit:(unsigned long long)arg1;

@end
