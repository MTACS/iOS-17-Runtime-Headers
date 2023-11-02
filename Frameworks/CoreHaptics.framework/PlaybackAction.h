
@interface PlaybackAction : NSObject {
    long long  action;
    float  time;
}

@property (nonatomic) long long action;
@property (nonatomic) float time;

- (long long)action;
- (void)setAction:(long long)arg1;
- (void)setTime:(float)arg1;
- (float)time;

@end
