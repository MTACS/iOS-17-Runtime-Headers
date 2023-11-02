
@interface EmojiPoster.EmojiCollectionViewController : UICollectionViewController <UITextFieldDelegate> {
    void configuration;
    void diffableDataSource;
    void hiddenEmojiField;
    void isSpinning;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)viewDidLoad;

@end
