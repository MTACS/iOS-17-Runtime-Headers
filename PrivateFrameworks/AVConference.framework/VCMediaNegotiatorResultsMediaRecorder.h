
@interface VCMediaNegotiatorResultsMediaRecorder : NSObject {
    unsigned int  _capabilities;
    int  _imageType;
    int  _videoCodec;
}

@property (nonatomic) unsigned int capabilities;
@property (nonatomic) int imageType;
@property (nonatomic) int videoCodec;

- (unsigned int)capabilities;
- (int)imageType;
- (void)setCapabilities:(unsigned int)arg1;
- (void)setImageType:(int)arg1;
- (void)setVideoCodec:(int)arg1;
- (int)videoCodec;

@end
