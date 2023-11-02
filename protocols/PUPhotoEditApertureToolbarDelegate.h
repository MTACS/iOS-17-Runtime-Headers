
@protocol PUPhotoEditApertureToolbarDelegate <NSObject>

@required

- (void)apertureToolbar:(PUPhotoEditApertureToolbar *)arg1 didChangeValue:(double)arg2;
- (void)apertureToolbar:(PUPhotoEditApertureToolbar *)arg1 didUpdateDepthActive:(bool)arg2;
- (void)apertureToolbarDidStartSliding:(PUPhotoEditApertureToolbar *)arg1;
- (void)apertureToolbarDidStopSliding:(PUPhotoEditApertureToolbar *)arg1;
- (bool)apertureToolbarIsDepthActive;
- (bool)apertureToolbarShouldRotateLabelsWithOrientation:(PUPhotoEditApertureToolbar *)arg1;

@end
