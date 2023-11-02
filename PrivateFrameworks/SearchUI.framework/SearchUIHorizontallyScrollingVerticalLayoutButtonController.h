
@interface SearchUIHorizontallyScrollingVerticalLayoutButtonController : SearchUIHorizontallyScrollingContainerButtonController {
    SearchUILabel * _footnoteLabel;
    SearchUILabel * _titleLabel;
    SearchUIImageView * thumbnailView;
}

@property (nonatomic, retain) SearchUILabel *footnoteLabel;
@property (nonatomic, retain) SearchUILabel *titleLabel;

- (void).cxx_destruct;
- (id)footnoteLabel;
- (void)setCardSectionRowModel:(id)arg1;
- (void)setFootnoteLabel:(id)arg1;
- (void)setThumbnailView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)setupContentView;
- (double)spacing;
- (id)thumbnailView;
- (id)titleLabel;

@end
