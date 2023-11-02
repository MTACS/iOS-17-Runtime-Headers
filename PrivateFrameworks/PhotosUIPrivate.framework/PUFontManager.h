
@interface PUFontManager : PXObservable {
    UIFont * _albumListSectionTitleLabelFont;
    UIFont * _albumListSubtitleLabelFont;
    UIFont * _albumListTitleLabelFont;
}

@property (nonatomic, retain) UIFont *albumListSectionTitleLabelFont;
@property (nonatomic, retain) UIFont *albumListSubtitleLabelFont;
@property (nonatomic, retain) UIFont *albumListTitleLabelFont;

- (void).cxx_destruct;
- (void)_preferredContentSizeChanged:(id)arg1;
- (void)_setNeedsUpdate;
- (id)albumListSectionTitleLabelFont;
- (id)albumListSubtitleLabelFont;
- (id)albumListTitleLabelFont;
- (void)dealloc;
- (id)init;
- (void)invalidateFonts;
- (id)mutableChangeObject;
- (void)setAlbumListSectionTitleLabelFont:(id)arg1;
- (void)setAlbumListSubtitleLabelFont:(id)arg1;
- (void)setAlbumListTitleLabelFont:(id)arg1;

@end
