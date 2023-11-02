
@interface PKSelectActionGroupActionsHeader : UIView {
    UIImageView * _imageView;
    bool  _loading;
    PKPerformActionLoadingView * _loadingView;
    NSString * _subtitle;
    UILabel * _subtitleLabel;
    NSString * _title;
    UILabel * _titleLabel;
}

@property (getter=isLoading, nonatomic) bool loading;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_imageSize;
- (id)initWithPass:(id)arg1 title:(id)arg2 subtitle:(id)arg3;
- (bool)isLoading;
- (void)layoutSubviews;
- (void)setLoading:(bool)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
