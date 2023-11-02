
@interface ReadingListTableViewCell : VibrantTableViewCell {
    int  _bookmarkID;
    VibrantLabelView * _detailTextLabel;
    long long  _dragState;
    NSString * _fetchingStatusText;
    bool  _hasImage;
    _SFSiteIconView * _imageView;
    NSString * _previewText;
    NSString * _siteName;
    UILabel * _siteNameLabel;
    UILabel * _textLabel;
    bool  _wantsSelectedAppearance;
}

@property (nonatomic, readonly) int bookmarkID;
@property (nonatomic, copy) NSString *fetchingStatusText;
@property (nonatomic) bool hasImage;
@property (nonatomic, copy) NSString *previewText;
@property (nonatomic, copy) NSString *siteName;

+ (double)minimumCellHeight;

- (void).cxx_destruct;
- (void)_createImageViewIfNeeded;
- (id)_detailLabelFont;
- (void)_initializeAutoLayoutConstraints;
- (id)_scaledFontForTextStyle:(id)arg1 addingSymbolicTraits:(unsigned int)arg2;
- (void)_setFetchingStatusTextForBookmark:(id)arg1;
- (void)_setOpaque:(bool)arg1 forSubview:(id)arg2;
- (id)_siteNameFont;
- (id)_titleLabelFont;
- (void)_updateNumberOfLines;
- (void)_updateSelectedAnimated:(bool)arg1;
- (void)_updateVibrantEffect;
- (int)bookmarkID;
- (void)dealloc;
- (void)displayThumbnailIconForBookmark:(id)arg1 synchronously:(bool)arg2;
- (void)dragStateDidChange:(long long)arg1;
- (id)fetchingStatusText;
- (bool)hasImage;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)previewText;
- (void)setAlpha:(double)arg1;
- (void)setBookmark:(id)arg1;
- (void)setBookmark:(id)arg1 isArchiving:(bool)arg2;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setFetchingStatusText:(id)arg1;
- (void)setHasImage:(bool)arg1;
- (void)setPreviewText:(id)arg1;
- (void)setReadingListIcon:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setSiteName:(id)arg1;
- (void)setUsesVibrantEffect:(bool)arg1;
- (id)siteName;
- (void)traitCollectionDidChange:(id)arg1;

@end
