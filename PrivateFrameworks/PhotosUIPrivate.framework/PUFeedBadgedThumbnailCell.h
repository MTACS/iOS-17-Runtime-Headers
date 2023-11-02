
@interface PUFeedBadgedThumbnailCell : PUFeedCell {
    PXBadgedThumbnailView * _badgedThumbnailView;
}

@property (nonatomic, readonly) PXBadgedThumbnailView *badgedThumbnailView;

- (void).cxx_destruct;
- (id)badgedThumbnailView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;

@end
