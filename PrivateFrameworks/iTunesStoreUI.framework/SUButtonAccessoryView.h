
@interface SUButtonAccessoryView : UIView {
    SUGradientButton * _button;
}

@property (nonatomic, readonly) SUGradientButton *button;

- (id)button;
- (void)dealloc;
- (id)init;
- (id)initWithDefaultSize;
- (void)layoutSubviews;

@end
