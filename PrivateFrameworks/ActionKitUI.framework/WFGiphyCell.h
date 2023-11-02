
@interface WFGiphyCell : UICollectionViewCell {
    NSURLSessionDataTask * _dataTask;
    UIImageView * _imageView;
    UIActivityIndicatorView * _indicatorView;
    WFGiphyObject * _object;
    UIImageView * _selectedImageView;
}

@property (nonatomic) NSURLSessionDataTask *dataTask;
@property (nonatomic) UIImageView *imageView;
@property (nonatomic) UIActivityIndicatorView *indicatorView;
@property (nonatomic) WFGiphyObject *object;
@property (nonatomic) UIImageView *selectedImageView;

- (void).cxx_destruct;
- (id)dataTask;
- (id)imageView;
- (id)indicatorView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)object;
- (id)selectedImageView;
- (void)setDataTask:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setIndicatorView:(id)arg1;
- (void)setObject:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectedImageView:(id)arg1;

@end
