
@interface AFImagePNGData : NSObject {
    NSData * _imageData;
    double  _scale;
}

@property (nonatomic, retain) NSData *imageData;
@property (nonatomic) double scale;

- (void).cxx_destruct;
- (id)imageData;
- (double)scale;
- (void)setImageData:(id)arg1;
- (void)setScale:(double)arg1;

@end
