
@interface CSActivityItemContentView : UIView {
    <CSActivityItemContentViewSizeProviding> * _sizeProvider;
}

@property (nonatomic) <CSActivityItemContentViewSizeProviding> *sizeProvider;

- (void).cxx_destruct;
- (void)setSizeProvider:(id)arg1;
- (id)sizeProvider;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
