
@interface HUHomeHubHeaderView : UITableViewHeaderFooterView {
    NSMutableArray * _constraints;
    UIImageView * _imageView;
    UILabel * _message;
}

@property (nonatomic, retain) NSMutableArray *constraints;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UILabel *message;

- (void).cxx_destruct;
- (id)_setupConstraints;
- (id)_setupImageView;
- (id)_setupMessage:(id)arg1;
- (id)constraints;
- (id)imageView;
- (id)initWithMessage:(id)arg1;
- (id)message;
- (void)setConstraints:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setMessage:(id)arg1;

@end
