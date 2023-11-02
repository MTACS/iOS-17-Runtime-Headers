
@interface SearchUIButtonItemView : UIButton {
    UIColor * _buttonColor;
    NSString * _buttonTitle;
    <SearchUIButtonItemViewDelegate> * _delegate;
    SFImage * _sfImage;
}

@property (nonatomic, retain) UIColor *buttonColor;
@property (nonatomic, retain) NSString *buttonTitle;
@property (nonatomic) <SearchUIButtonItemViewDelegate> *delegate;
@property (nonatomic, retain) SFImage *sfImage;

- (void).cxx_destruct;
- (id)buttonColor;
- (id)buttonTitle;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)delegate;
- (void)setButtonColor:(id)arg1;
- (void)setButtonTitle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSfImage:(id)arg1;
- (id)sfImage;

@end
