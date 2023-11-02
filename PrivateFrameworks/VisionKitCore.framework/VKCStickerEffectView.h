
@interface VKCStickerEffectView : UIView <VKCStickerVideoDecoderDelegate> {
    UIImage * _fullSizeImage;
    UIView<VKStickerEffectViewInternal> * _internalView;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    VKCStickerVideoDecoder * _videoDecoder;
}

@property (nonatomic, retain) UIImage *_image;
@property (nonatomic) double curlPosition;
@property (nonatomic, retain) VKCStickerEffect *effect;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIView<VKStickerEffectViewInternal> *internalView;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic, retain) NSData *videoData;
@property (nonatomic, retain) VKCStickerVideoDecoder *videoDecoder;

+ (double)extraScaleToIncludeStrokeWithEffectType:(long long)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

- (void).cxx_destruct;
- (id)_image;
- (bool)boundsIncludeStroke;
- (double)curlPosition;
- (void)decoder:(id)arg1 displayFrame:(struct CGImage { }*)arg2 forIndex:(long long)arg3;
- (id)effect;
- (id)image;
- (id)imageWithImage:(id)arg1 scaledToSize:(struct CGSize { double x1; double x2; })arg2;
- (id)init;
- (id)initWithDevice:(id)arg1;
- (void)initialProcessingCompleteForDecoder:(id)arg1;
- (id)internalView;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isPaused;
- (void)layoutSubviews;
- (void)playSettlingAnimation;
- (void)setBoundsIncludeStroke:(bool)arg1;
- (void)setCurlPosition:(double)arg1;
- (void)setEffect:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setInternalView:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setVideoData:(id)arg1;
- (void)setVideoDecoder:(id)arg1;
- (void)set_image:(id)arg1;
- (void)snapshotWithCompletionHandler:(id /* block */)arg1;
- (id)videoData;
- (id)videoDecoder;

@end
