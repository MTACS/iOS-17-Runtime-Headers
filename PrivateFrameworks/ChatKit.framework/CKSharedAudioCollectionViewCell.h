
@interface CKSharedAudioCollectionViewCell : CKSharedContentsCollectionViewCell {
    CKAudioProgressView * _audioPlaybackView;
}

@property (nonatomic, retain) CKAudioProgressView *audioPlaybackView;
@property (nonatomic, retain) UIDateLabel *previewTitleLabel;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)audioPlaybackView;
- (void)configureWithAttachmentItem:(id)arg1;
- (id)formattedCreatedDateTextFromDate:(id)arg1;
- (id)formattedDurationTextForAsset:(id)arg1;
- (void)layoutSubviews;
- (void)setAudioPlaybackView:(id)arg1;

@end
