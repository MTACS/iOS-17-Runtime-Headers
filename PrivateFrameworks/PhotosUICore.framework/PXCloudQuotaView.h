
@interface PXCloudQuotaView : UIView {
    UIView * _contentView;
}

@property (nonatomic, readonly) UIView *contentView;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_performLayoutInWidth:(double)arg1 updateSubviewFrames:(bool)arg2;
- (id)contentView;
- (id)contentViewFont;
- (struct CGSize { double x1; double x2; })contentViewSizeForWidth:(double)arg1;
- (id)initWithContentView:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
