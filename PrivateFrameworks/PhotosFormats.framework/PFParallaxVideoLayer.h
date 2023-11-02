
@interface PFParallaxVideoLayer : PFParallaxLayer {
    AVAsset * _video;
    NSData * _videoData;
}

@property (nonatomic, readonly) AVAsset *video;
@property (nonatomic, readonly) NSData *videoData;

- (void).cxx_destruct;
- (id)fileExtension;
- (id)initWithVideoData:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zPosition:(double)arg3 identifier:(id)arg4;
- (id)layerByUpdatingFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })pixelSize;
- (bool)saveToURL:(id)arg1 error:(id*)arg2;
- (id)video;
- (id)videoData;

@end
