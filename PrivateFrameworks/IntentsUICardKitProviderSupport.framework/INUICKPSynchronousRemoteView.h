
@interface INUICKPSynchronousRemoteView : UIView {
    <INUICKPSynchronousRemoteViewDelegate> * _delegate;
}

@property (nonatomic) <INUICKPSynchronousRemoteViewDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
