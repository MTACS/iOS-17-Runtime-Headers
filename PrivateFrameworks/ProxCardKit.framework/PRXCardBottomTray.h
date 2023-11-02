
@interface PRXCardBottomTray : UIView {
    NSArray * _actionButtons;
    UIView * _activityIndicator;
    NSArray * _buttonConstraints;
    <PRXCardBottomTrayDelegate> * _delegate;
    UIImageView * _imageView;
    NSString * _title;
    NSArray * _titleConstraints;
    UILabel * _titleLabel;
}

@property (nonatomic, copy) NSArray *actionButtons;
@property (nonatomic, retain) UIView *activityIndicator;
@property (nonatomic, copy) NSArray *buttonConstraints;
@property (nonatomic, readonly) bool containsContents;
@property (nonatomic) <PRXCardBottomTrayDelegate> *delegate;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSArray *titleConstraints;
@property (nonatomic, readonly) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)actionButtons;
- (id)activityIndicator;
- (id)buttonConstraints;
- (bool)containsContents;
- (id)delegate;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setActionButtons:(id)arg1;
- (void)setActivityIndicator:(id)arg1;
- (void)setButtonConstraints:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleConstraints:(id)arg1;
- (id)title;
- (id)titleConstraints;
- (id)titleLabel;
- (void)updateConstraints;

@end
