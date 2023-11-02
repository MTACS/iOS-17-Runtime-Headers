
@interface SVXPlaybackRequestInfo : NSObject {
    bool  _didFinish;
    bool  _didStart;
    double  _finish;
    double  _start;
}

@property (nonatomic) bool didFinish;
@property (nonatomic) bool didStart;
@property (nonatomic) double finish;
@property (nonatomic) double start;

- (bool)didFinish;
- (bool)didStart;
- (double)duration;
- (double)finish;
- (void)setDidFinish:(bool)arg1;
- (void)setDidStart:(bool)arg1;
- (void)setFinish:(double)arg1;
- (void)setStart:(double)arg1;
- (double)start;

@end
