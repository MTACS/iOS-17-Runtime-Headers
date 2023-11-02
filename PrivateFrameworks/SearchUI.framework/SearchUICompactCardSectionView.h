
@interface SearchUICompactCardSectionView : SearchUICardSectionView {
    SearchUIImageView * _imageView;
    SearchUILabel * _subtitleLabel;
    SearchUILabel * _titleLabel;
}

@property (nonatomic, retain) NUIContainerGridView *contentView;
@property (nonatomic, retain) SearchUIImageView *imageView;
@property (nonatomic, retain) SearchUILabel *subtitleLabel;
@property (nonatomic, retain) SearchUILabel *titleLabel;

+ (bool)hasLeadingImageForCardSection:(id)arg1;
+ (bool)safariCompletionListRefinementsEnabled;
+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (void).cxx_destruct;
- (id)imageView;
- (id)leadingTextView;
- (id)richTextForSearchUIText:(id)arg1 withMaxLines:(unsigned long long)arg2;
- (void)setImageView:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)setupContentView;
- (id)subtitleLabel;
- (id)titleLabel;
- (void)updateWithRowModel:(id)arg1;

@end
