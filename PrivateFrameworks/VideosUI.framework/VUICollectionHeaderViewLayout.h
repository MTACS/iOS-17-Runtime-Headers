
@interface VUICollectionHeaderViewLayout : TVViewLayout {
    TVImageLayout * _imageViewLayout;
    VUITextLayout * _subtitleTextLayout;
    VUITextLayout * _titleTextLayout;
}

@property (nonatomic, retain) TVImageLayout *imageViewLayout;
@property (nonatomic, readonly) VUITextLayout *subtitleTextLayout;
@property (nonatomic, readonly) VUITextLayout *titleTextLayout;

+ (id)maxImageContentSizeCategory;

- (void).cxx_destruct;
- (id)imageViewLayout;
- (id)init;
- (void)setImageViewLayout:(id)arg1;
- (id)subtitleTextLayout;
- (id)titleTextLayout;

@end
