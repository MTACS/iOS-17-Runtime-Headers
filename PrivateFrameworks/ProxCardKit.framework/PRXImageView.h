
@interface PRXImageView : UIImageView {
    long long  _style;
}

@property (nonatomic, readonly) long long style;

+ (id)imageViewWithStyle:(long long)arg1;

- (id)initWithStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (long long)style;

@end
