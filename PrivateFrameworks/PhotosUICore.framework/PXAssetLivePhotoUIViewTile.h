
@interface PXAssetLivePhotoUIViewTile : NSObject <PXAssetTile, PXReusableObject, PXUIViewBasicTile> {
    ISPlayerItem * __playerItem;
    double  _cornerRadius;
    PXImageRequester * _imageRequester;
    ISLivePhotoPlayer * _livePhotoPlayer;
    long long  _livePhotoRequestID;
    ISLivePhotoUIView * _livePhotoView;
    unsigned long long  _requestCount;
}

@property (setter=_setPlayerItem:, nonatomic, retain) ISPlayerItem *_playerItem;
@property (nonatomic) double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXImageRequester *imageRequester;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (void)_handleLivePhotoResult:(id)arg1 info:(id)arg2 expectedRequestCount:(unsigned long long)arg3 expectedRequestID:(long long)arg4;
- (id)_playerItem;
- (void)_requestLivePhotoIfNeeded;
- (void)_setPlayerItem:(id)arg1;
- (struct CGSize { double x1; double x2; })_targetSize;
- (void)_updateLivePhotoView;
- (void)becomeReusable;
- (double)cornerRadius;
- (void)didApplyGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; })arg1 withUserData:(id)arg2;
- (id)imageRequester;
- (void)prepareForReuse;
- (void)setCornerRadius:(double)arg1;
- (void)setImageRequester:(id)arg1;
- (id)view;

@end
