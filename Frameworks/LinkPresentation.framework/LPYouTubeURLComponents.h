
@interface LPYouTubeURLComponents : NSObject {
    double  _startTime;
    NSString * _videoID;
}

@property (nonatomic) double startTime;
@property (nonatomic, copy) NSString *videoID;

+ (id)formatAsYouTubeTime:(double)arg1;
+ (bool)parseYouTubeTimeFormat:(id)arg1 outTime:(double*)arg2;

- (void).cxx_destruct;
- (void)setStartTime:(double)arg1;
- (void)setVideoID:(id)arg1;
- (double)startTime;
- (id)videoID;

@end
