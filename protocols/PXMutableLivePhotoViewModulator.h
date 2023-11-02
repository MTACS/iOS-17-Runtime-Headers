
@protocol PXMutableLivePhotoViewModulator <NSObject>

@required

- (struct CGImage { }*)gainMapImage;
- (float)gainMapValue;
- (ISLivePhotoUIView *)livePhotoView;
- (bool)revealsGainMapImage;
- (void)setGainMapImage:(struct CGImage { }*)arg1;
- (void)setGainMapImage:(struct CGImage { }*)arg1 animated:(bool)arg2;
- (void)setGainMapValue:(float)arg1;
- (void)setLivePhotoView:(ISLivePhotoUIView *)arg1;
- (void)setRevealsGainMapImage:(bool)arg1;

@end
