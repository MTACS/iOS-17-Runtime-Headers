
@interface PXSharedLibraryRulesTableViewCell : UITableViewCell {
    NSString * _detail;
    UILabel * _detailLabel;
    UIImage * _image;
    UIImageView * _imageView;
    NSString * _subtitle;
    UILabel * _subtitleLabel;
    NSString * _title;
    UILabel * _titleLabel;
}

@property (nonatomic, copy) NSString *detail;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)_updateDetailLabel;
- (void)_updateImageView;
- (void)_updateSubtitleLabel;
- (void)_updateTitleLabel;
- (id)detail;
- (id)image;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setDetail:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
