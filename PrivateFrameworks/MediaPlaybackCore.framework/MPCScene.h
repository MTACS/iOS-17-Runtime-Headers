
@interface MPCScene : NSObject {
    long long  _endFrame;
    long long  _iterations;
    long long  _startFrame;
}

@property (nonatomic) long long endFrame;
@property (nonatomic) long long iterations;
@property (nonatomic) long long startFrame;

- (long long)endFrame;
- (id)init;
- (long long)iterations;
- (void)setEndFrame:(long long)arg1;
- (void)setIterations:(long long)arg1;
- (void)setStartFrame:(long long)arg1;
- (long long)startFrame;

@end
