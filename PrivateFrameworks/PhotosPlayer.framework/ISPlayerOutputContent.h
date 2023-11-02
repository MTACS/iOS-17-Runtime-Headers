
@interface ISPlayerOutputContent : NSObject {
    NSNumber * _aspectRatio;
    struct CGImage { } * _photo;
    int  _photoEXIFOrientation;
    bool  _photoIsOriginal;
    ISWrappedAVPlayer * _videoPlayer;
    struct CGSize { 
        double width; 
        double height; 
    }  _videoSize;
}

@property (nonatomic, readonly) NSNumber *aspectRatio;
@property (nonatomic, readonly) struct CGImage { }*photo;
@property (nonatomic, readonly) int photoEXIFOrientation;
@property (nonatomic, readonly) bool photoIsOriginal;
@property (nonatomic, readonly) ISWrappedAVPlayer *videoPlayer;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } videoSize;

- (void).cxx_destruct;
- (id)aspectRatio;
- (void)dealloc;
- (id)description;
- (id)initWithPhoto:(struct CGImage { }*)arg1 photoIsOriginal:(bool)arg2 photoEXIFOrientation:(int)arg3 videoPlayer:(id)arg4 aspectRatio:(id)arg5;
- (struct CGImage { }*)photo;
- (int)photoEXIFOrientation;
- (bool)photoIsOriginal;
- (id)videoPlayer;
- (struct CGSize { double x1; double x2; })videoSize;

@end
