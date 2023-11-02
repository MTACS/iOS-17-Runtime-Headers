
@interface VCMediaNegotiatorMultiwayVideoStream : VCMediaNegotiatorMultiwayMediaStream <NSCopying> {
    unsigned int  _frameRate;
    unsigned int  _keyFrameInterval;
    int  _payload;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic) unsigned int frameRate;
@property (nonatomic) unsigned int keyFrameInterval;
@property (nonatomic) int payload;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)frameRate;
- (bool)isEqual:(id)arg1;
- (unsigned int)keyFrameInterval;
- (int)payload;
- (void)setFrameRate:(unsigned int)arg1;
- (void)setKeyFrameInterval:(unsigned int)arg1;
- (void)setPayload:(int)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end
