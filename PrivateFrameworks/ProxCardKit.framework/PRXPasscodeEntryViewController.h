
@interface PRXPasscodeEntryViewController : PRXCardContentViewController <PRXPasscodeEntryViewDelegate> {
    UIImage * _image;
    PRXImageView * _imageView;
    long long  _numberOfDigits;
    PRXPasscodeEntryView * _passcodeEntryView;
    id /* block */  _textChangeHandler;
    id /* block */  _textEntryCompletionHandler;
    bool  _useMonospacedFont;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) PRXImageView *imageView;
@property (nonatomic) long long numberOfDigits;
@property (nonatomic, readonly) PRXPasscodeEntryView *passcodeEntryView;
@property (nonatomic, copy) id /* block */ textChangeHandler;
@property (nonatomic, copy) id /* block */ textEntryCompletionHandler;
@property (nonatomic) bool useMonospacedFont;

- (void).cxx_destruct;
- (void)_scrollToWells;
- (void)_textDidChange:(id)arg1;
- (void)_updatePasscodeEntryView;
- (void)didCompleteTextEntry:(id)arg1;
- (id)image;
- (id)imageView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)numberOfDigits;
- (id)passcodeEntryView;
- (void)passcodeEntryViewDidBecomeFirstResponder:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setNumberOfDigits:(long long)arg1;
- (void)setTextChangeHandler:(id /* block */)arg1;
- (void)setTextEntryCompletionHandler:(id /* block */)arg1;
- (void)setUseMonospacedFont:(bool)arg1;
- (id /* block */)textChangeHandler;
- (void)textDidChange:(id)arg1;
- (id /* block */)textEntryCompletionHandler;
- (bool)useMonospacedFont;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
