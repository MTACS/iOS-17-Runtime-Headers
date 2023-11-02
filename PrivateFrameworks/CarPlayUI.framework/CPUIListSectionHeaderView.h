
@interface CPUIListSectionHeaderView : CPSTableViewHeaderFooterView {
    UIImageView * _artworkImageView;
    UIImage * _image;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    CPUIMediaButton * _mediaButton;
    bool  _showsButton;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIImageView *artworkImageView;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, retain) CPUIMediaButton *mediaButton;
@property (nonatomic) bool showsButton;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)artworkImage;
- (id)artworkImageView;
- (void)configureButton:(id /* block */)arg1;
- (id)image;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (id)mediaButton;
- (void)setArtworkImageView:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMediaButton:(id)arg1;
- (void)setShowsButton:(bool)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTemplateImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (bool)showsButton;
- (id)subtitle;
- (id)subtitleLabel;
- (id)title;
- (id)titleLabel;

@end
