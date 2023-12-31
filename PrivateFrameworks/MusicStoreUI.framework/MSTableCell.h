
@interface MSTableCell : SUTableCell {
    UIImageView * _backsideSnapshotView;
    UIView * _previewContainerView;
    MSAudioProgressView * _previewProgressView;
    SUPlayerStatus * _previewStatus;
}

@property (nonatomic, retain) SUPlayerStatus *previewStatus;

- (void)_destroyPreviewProgressView;
- (void)_flipFromPreviewProgressView;
- (void)_flipToPreviewProgressView;
- (void)dealloc;
- (id)previewStatus;
- (void)setPreviewStatus:(id)arg1;
- (void)setPreviewStatus:(id)arg1 animated:(bool)arg2;

@end
