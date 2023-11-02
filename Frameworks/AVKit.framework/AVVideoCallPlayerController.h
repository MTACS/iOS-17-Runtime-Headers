
@interface AVVideoCallPlayerController : AVPlayerController {
    struct CGSize { 
        double width; 
        double height; 
    }  _contentDimensions;
    AVPictureInPictureControllerContentSource * _contentSource;
    bool  _pictureInPicturePossible;
}

@property (nonatomic) struct CGSize { double x1; double x2; } contentDimensions;
@property (nonatomic) AVPictureInPictureControllerContentSource *contentSource;
@property (getter=isPictureInPicturePossible, nonatomic) bool pictureInPicturePossible;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })contentDimensions;
- (id)contentSource;
- (bool)isPictureInPicturePossible;
- (bool)isPlaying;
- (double)rate;
- (void)setContentDimensions:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentSource:(id)arg1;
- (void)setPictureInPicturePossible:(bool)arg1;
- (long long)status;
- (long long)timeControlStatus;

@end
