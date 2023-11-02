
@interface WFRemoteFileStatusView : UIView {
    UIView * _containerView;
    <WFRemoteFileStatusViewDelegate> * _delegate;
    NSArray * _emptyConstraints;
    NSArray * _errorConstraints;
    UIActivityIndicatorView * _indicatorView;
    NSArray * _loadingContraints;
    UIButton * _recoveryButton;
    UILabel * _statusLabel;
}

@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic) <WFRemoteFileStatusViewDelegate> *delegate;
@property (nonatomic, readonly) NSArray *emptyConstraints;
@property (nonatomic, readonly) NSArray *errorConstraints;
@property (nonatomic, readonly) UIActivityIndicatorView *indicatorView;
@property (nonatomic, readonly) NSArray *loadingContraints;
@property (nonatomic, readonly) UIButton *recoveryButton;
@property (nonatomic, readonly) UILabel *statusLabel;

- (void).cxx_destruct;
- (id)containerView;
- (id)delegate;
- (id)emptyConstraints;
- (id)errorConstraints;
- (id)indicatorView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)loadingContraints;
- (id)recoveryButton;
- (void)recoveryButtonTapped;
- (void)setDelegate:(id)arg1;
- (void)setEmptyWithLabel:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setLoading;
- (id)statusLabel;

@end
