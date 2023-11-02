
@interface GKNoContentView : UIView {
    id /* block */  _buttonAction;
    GKUIContentUnavailableView * _contentUnavailableView;
    bool  _loading;
    UIActivityIndicatorView * _loadingIndicatorView;
    UIStackView * _stackView;
}

@property (nonatomic, copy) id /* block */ buttonAction;
@property (nonatomic, copy) NSString *buttonTitle;
@property (nonatomic, retain) GKUIContentUnavailableView *contentUnavailableView;
@property (getter=isLoading, nonatomic) bool loading;
@property (nonatomic, retain) UIActivityIndicatorView *loadingIndicatorView;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, retain) UIStackView *stackView;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id /* block */)buttonAction;
- (id)buttonTitle;
- (id)contentUnavailableView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isLoading;
- (id)loadingIndicatorView;
- (id)message;
- (void)setButtonAction:(id /* block */)arg1;
- (void)setButtonTitle:(id)arg1;
- (void)setContentUnavailableView:(id)arg1;
- (void)setLoading:(bool)arg1;
- (void)setLoadingIndicatorView:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setStackView:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)stackView;
- (id)title;

@end
