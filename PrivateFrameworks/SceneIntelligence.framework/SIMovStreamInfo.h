
@interface SIMovStreamInfo : NSObject {
    unsigned int  _format;
    unsigned int  _frameRate;
    NSString * _name;
    int  _readCycle;
    struct CGSize { 
        double width; 
        double height; 
    }  _resolution;
}

@property (nonatomic, readonly) unsigned int format;
@property (nonatomic, readonly) unsigned int frameRate;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) int readCycle;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } resolution;

- (void).cxx_destruct;
- (id)description;
- (unsigned int)format;
- (unsigned int)frameRate;
- (id)initInfoWithTrackName:(id)arg1 frameRate:(double)arg2 pixelBufferFormat:(unsigned int)arg3 resolution:(struct CGSize { double x1; double x2; })arg4;
- (id)name;
- (int)readCycle;
- (struct CGSize { double x1; double x2; })resolution;
- (void)setReadCycle:(int)arg1;

@end
