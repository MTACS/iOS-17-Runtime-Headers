
@interface CKWatchfaceImageBalloonView : CKLinkBalloonView {
    bool  _isIrisAsset;
    LPLinkMetadata * _metadata;
}

@property (nonatomic, retain) LPLinkMetadata *metadata;

- (void).cxx_destruct;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3 hasInvisibleInkEffect:(bool)arg4;
- (bool)isIrisAsset;
- (id)metadata;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)setIsIrisAsset:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)tapGestureRecognized:(id)arg1;

@end
