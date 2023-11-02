
@interface PTCinematographyFocusFrames : NSObject {
    NSArray * _frames;
    PTCinematographyFocusFramesOptions * _options;
}

@property (nonatomic, retain) NSArray *frames;
@property (nonatomic, copy) PTCinematographyFocusFramesOptions *options;

- (void).cxx_destruct;
- (long long)_framesIndex:(unsigned long long)arg1 earlierBy:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)frames;
- (id)initWithFrames:(id)arg1 options:(id)arg2;
- (id)options;
- (void)setFrames:(id)arg1;
- (void)setOptions:(id)arg1;
- (long long)startIndexForLinearRackFocusPullToFrameAtIndex:(unsigned long long)arg1;

@end
