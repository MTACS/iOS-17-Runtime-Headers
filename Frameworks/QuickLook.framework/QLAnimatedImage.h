
@interface QLAnimatedImage : NSObject {
    double  _duration;
    struct QLFrameDurationInformation { double x1; double x2; } * _durations;
    unsigned long long  _durationsCount;
    QLImageData * _imageData;
    UIImage * _lastImage;
    unsigned long long  _lastImageIndex;
}

- (void).cxx_destruct;
- (void)dealloc;
- (double)duration;
- (id)frameAtTime:(double)arg1;
- (unsigned long long)frameCount;
- (void)generateDurations;
- (long long)indexForTime:(double)arg1;
- (id)initWithImageSource:(struct CGImageSource { }*)arg1;
- (bool)time:(double)arg1 belongsToIndex:(unsigned long long)arg2;

@end
