
@interface CKLivePhotoBalloonView : CKImageBalloonView {
    bool  _isIrisAsset;
    bool  _isMonoskiAsset;
    PHLivePhoto * _livePhoto;
    PHLivePhotoView * _livePhotoView;
}

@property (nonatomic, retain) PHLivePhoto *livePhoto;
@property (nonatomic, retain) PHLivePhotoView *livePhotoView;

- (void).cxx_destruct;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3 hasInvisibleInkEffect:(bool)arg4;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isIrisAsset;
- (bool)isMonoskiAsset;
- (void)layoutSubviews;
- (id)livePhoto;
- (id)livePhotoView;
- (void)setIsIrisAsset:(bool)arg1;
- (void)setIsMonoskiAsset:(bool)arg1;
- (void)setLivePhoto:(id)arg1;
- (void)setLivePhotoView:(id)arg1;

@end
