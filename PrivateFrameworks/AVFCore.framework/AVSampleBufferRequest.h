
@interface AVSampleBufferRequest : NSObject {
    AVSampleBufferRequestInternal * _request;
}

@property (nonatomic) long long direction;
@property (nonatomic, retain) AVSampleCursor *limitCursor;
@property (nonatomic) long long maxSampleCount;
@property (nonatomic) long long mode;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } overrideTime;
@property (nonatomic) long long preferredMinSampleCount;
@property (nonatomic, readonly, retain) AVSampleCursor *startCursor;

+ (id)sampleBufferRequestWithStartCursor:(id)arg1;

- (unsigned int)_figSampleGeneratorReadFlags;
- (int)_figSampleGeneratorReadPolicy;
- (void)dealloc;
- (long long)direction;
- (id)init;
- (id)initWithStartCursor:(id)arg1;
- (id)limitCursor;
- (long long)maxSampleCount;
- (long long)mode;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })overrideTime;
- (long long)preferredMinSampleCount;
- (void)setDirection:(long long)arg1;
- (void)setLimitCursor:(id)arg1;
- (void)setMaxSampleCount:(long long)arg1;
- (void)setMode:(long long)arg1;
- (void)setOverrideTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPreferredMinSampleCount:(long long)arg1;
- (id)startCursor;

@end
