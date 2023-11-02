
@interface VUILibraryProductLockupLayout : NSObject <VUILibraryProductLockupViewLayout> {
    VUITextLayout * _descriptionTextLayout;
    VUIMediaEntityType * _entityType;
    VUITextLayout * _playLabelTextLayout;
    VUITextLayout * _subtitleTextLayout;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) VUITextLayout *descriptionTextLayout;
@property (nonatomic, readonly) VUIMediaEntityType *entityType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VUITextLayout *playLabelTextLayout;
@property (nonatomic, retain) VUITextLayout *subtitleTextLayout;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (double)buttonModuleTopMarginForWindowWidth:(double)arg1;
- (void)configLayout;
- (double)contentDescriptionBottomMarginForWindowWidth:(double)arg1;
- (id)contentDescriptionFontForSizeClass:(long long)arg1;
- (int)contentDescriptionNumberOfLinesForTraitCollection:(id)arg1;
- (double)contentDescriptionTopMarginForWindowWidth:(double)arg1;
- (double)coverArtBottomPadding;
- (double)coverArtImageRightMarginForWindowWidth:(double)arg1;
- (struct CGSize { double x1; double x2; })coverArtImageSize;
- (id)descriptionTextLayout;
- (id)descriptionTextLayoutForTraitCollection:(id)arg1 isExpanded:(bool)arg2;
- (long long)downloadButtonPosition;
- (id)entityType;
- (id)initWithLayoutType:(long long)arg1 entityType:(id)arg2;
- (long long)layoutTypeForWindowWidth:(double)arg1;
- (double)metadataTopMargin;
- (id)playLabelTextLayout;
- (void)setDescriptionTextLayout:(id)arg1;
- (void)setPlayLabelTextLayout:(id)arg1;
- (void)setSubtitleTextLayout:(id)arg1;
- (id)subtitleTextLayout;
- (id)subtitleTextLayoutForWindowWidth:(double)arg1;
- (double)subtitleTopMarginForWindowWidth:(double)arg1;
- (double)titleTopMargin;
- (long long)type;

@end
