
@interface VUIDownloadCollectionViewCell : VUILibraryLockupViewCell <VUIDownloadEntityDelegate, VUIRentalExpirationLabelDelegate> {
    <VUIDownloadCollectionViewCellDelegate> * _delegate;
    VUILabel * _dotSeparatorLabel;
    VUIDownloadButton * _downloadButton;
    VUIDownloadEntity * _downloadEntity;
    UIImageView * _editImageView;
    bool  _editing;
    VUILabel * _metaDataHeaderFirstLabel;
    VUILabel * _metaDataHeaderSecondLabel;
    unsigned long long  _previousDownloadState;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VUIDownloadCollectionViewCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) VUILabel *dotSeparatorLabel;
@property (nonatomic, retain) VUIDownloadButton *downloadButton;
@property (nonatomic, retain) VUIDownloadEntity *downloadEntity;
@property (nonatomic, retain) UIImageView *editImageView;
@property (nonatomic) bool editing;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VUILabel *metaDataHeaderFirstLabel;
@property (nonatomic, retain) VUILabel *metaDataHeaderSecondLabel;
@property (nonatomic) unsigned long long previousDownloadState;
@property (readonly) Class superclass;

+ (id)_generateMetaDataHeaderFirstLabelForDownloadEntity:(id)arg1;
+ (void)_movieConfigurationForVUIDownloadEntityCollectionViewCell:(id)arg1 withDownloadEntity:(id)arg2;
+ (void)_showConfigurationForVUIDownloadEntityCollectionViewCell:(id)arg1 withDownloadEntity:(id)arg2;
+ (void)configureVUIDownloadEntityCollectionViewCell:(id)arg1 withDownloadEntity:(id)arg2 width:(double)arg3 forMetrics:(bool)arg4;

- (void).cxx_destruct;
- (void)_addDownloadButtonIfRequired:(id)arg1;
- (void)_addMetaDataLabelsIfRequired:(id)arg1;
- (void)_configureViewElementsForAX;
- (bool)_hasSecondaryLabel;
- (struct CGSize { double x1; double x2; })_layoutForAccessibility:(struct CGSize { double x1; double x2; })arg1 metricsOnly:(bool)arg2;
- (struct CGSize { double x1; double x2; })_layoutForCompact:(struct CGSize { double x1; double x2; })arg1 metricsOnly:(bool)arg2;
- (struct CGSize { double x1; double x2; })_layoutWithSize:(struct CGSize { double x1; double x2; })arg1 metricsOnly:(bool)arg2;
- (void)_updateViewForEditState;
- (id)delegate;
- (id)dotSeparatorLabel;
- (id)downloadButton;
- (id)downloadEntity;
- (void)downloadEntity:(id)arg1 numberOfItemsDidChange:(unsigned long long)arg2;
- (void)downloadEntity:(id)arg1 numberOfItemsDownloadingDidChange:(id)arg2;
- (id)editImageView;
- (bool)editing;
- (void)layoutSubviews;
- (id)metaDataHeaderFirstLabel;
- (id)metaDataHeaderSecondLabel;
- (void)prepareForReuse;
- (unsigned long long)previousDownloadState;
- (void)rentalExpirationLabelNeedsRelayout:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDotSeparatorLabel:(id)arg1;
- (void)setDownloadButton:(id)arg1;
- (void)setDownloadEntity:(id)arg1;
- (void)setEditImageView:(id)arg1;
- (void)setEditing:(bool)arg1;
- (void)setMetaDataHeaderFirstLabel:(id)arg1;
- (void)setMetaDataHeaderSecondLabel:(id)arg1;
- (void)setPreviousDownloadState:(unsigned long long)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
