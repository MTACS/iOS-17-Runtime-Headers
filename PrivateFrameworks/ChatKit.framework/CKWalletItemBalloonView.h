
@interface CKWalletItemBalloonView : CKLinkBalloonView {
    bool  _isIrisAsset;
    bool  _pendingPropertyChange;
    LPWebLinkPresentationProperties * _presentationProperties;
}

@property (nonatomic, retain) LPWebLinkPresentationProperties *presentationProperties;

- (void).cxx_destruct;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3 hasInvisibleInkEffect:(bool)arg4;
- (bool)isIrisAsset;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (id)presentationProperties;
- (void)setIsIrisAsset:(bool)arg1;
- (void)setPresentationProperties:(id)arg1;

@end
