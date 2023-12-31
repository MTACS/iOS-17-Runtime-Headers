
@protocol PUPhotoBrowserZoomTransitionDelegate <NSObject>

@required

- (bool)zoomTransition:(PUPhotoBrowserZoomTransition *)arg1 getFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 inCoordinateSpace:(id*)arg3 contentMode:(long long*)arg4 cropInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg5 forPhotoToken:(id)arg6 operation:(long long)arg7;
- (id)zoomTransition:(PUPhotoBrowserZoomTransition *)arg1 photoTokenForPhoto:(PHAsset *)arg2 inCollection:(PHAssetCollection *)arg3;

@optional

- (void)zoomTransition:(PUPhotoBrowserZoomTransition *)arg1 didFinishAnimationForOperation:(long long)arg2;
- (void)zoomTransition:(PUPhotoBrowserZoomTransition *)arg1 didFinishForOperation:(long long)arg2 animated:(bool)arg3 interactive:(bool)arg4;
- (void)zoomTransition:(PUPhotoBrowserZoomTransition *)arg1 setVisibility:(bool)arg2 forPhotoToken:(id)arg3;
- (void)zoomTransition:(PUPhotoBrowserZoomTransition *)arg1 shouldHidePhotoTokens:(NSSet *)arg2;
- (bool)zoomTransition:(void *)arg1 transitionImageForPhotoToken:(void *)arg2 callback:(void *)arg3; // needs 3 arg types, found 8: PUPhotoBrowserZoomTransition *, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, void*
- (void)zoomTransition:(PUPhotoBrowserZoomTransition *)arg1 willBeginAnimationForOperation:(long long)arg2;
- (void)zoomTransition:(PUPhotoBrowserZoomTransition *)arg1 willBeginForOperation:(long long)arg2 animated:(bool)arg3 interactive:(bool)arg4;

@end
