
@interface HUGridCircularButtonView : UIView {
    UIButton * _button;
    UIImage * _buttonImage;
    <HUGridCircularButtonViewDelegate> * _delegate;
    UIListContentView * _label;
    NSString * _title;
}

@property (nonatomic, retain) UIButton *button;
@property (nonatomic, readonly) UIImage *buttonImage;
@property (nonatomic) <HUGridCircularButtonViewDelegate> *delegate;
@property (nonatomic, retain) UIListContentView *label;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)button;
- (id)buttonImage;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithImage:(id)arg1 title:(id)arg2;
- (id)label;
- (void)setButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLabel:(id)arg1;
- (id)title;

@end
