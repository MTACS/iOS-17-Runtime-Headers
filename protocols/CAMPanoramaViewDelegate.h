
@protocol CAMPanoramaViewDelegate <NSObject>

@required

- (void)panoramaView:(CAMPanoramaView *)arg1 didUpdateInstruction:(long long)arg2;
- (void)panoramaViewDidRequestSynchronizedDirectionChange:(CAMPanoramaView *)arg1 toDirection:(long long)arg2;

@end
