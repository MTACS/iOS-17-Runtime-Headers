
@interface VATKeywordSpotterResult : NSObject {
    bool  __isNbestEntry;
    double  _audioDuration;
    int  _audioEnd;
    NSURL * _audioFileURL;
    int  _audioStart;
    float  _cost;
    int  _duration;
    int  _end;
    NSString * _keywordText;
    double  _secondPassDuration;
    NSString * _secondPassResult;
    int  _start;
    float  _threshold;
}

@property (nonatomic) bool _isNbestEntry;
@property (nonatomic) double audioDuration;
@property (nonatomic) int audioEnd;
@property (nonatomic, copy) NSURL *audioFileURL;
@property (nonatomic) int audioStart;
@property (nonatomic) float cost;
@property (nonatomic) int duration;
@property (nonatomic) int end;
@property (nonatomic) NSString *keyword;
@property (nonatomic) double secondPassDuration;
@property (nonatomic, copy) NSString *secondPassResult;
@property (nonatomic) int start;
@property (nonatomic) float threshold;

- (void).cxx_destruct;
- (bool)_isNbestEntry;
- (double)audioDuration;
- (int)audioEnd;
- (id)audioFileURL;
- (int)audioStart;
- (float)cost;
- (id)description;
- (int)duration;
- (int)end;
- (id)initWithKeyword:(id)arg1 cost:(float)arg2 threshold:(float)arg3 start:(int)arg4 end:(int)arg5 duration:(int)arg6;
- (id)keyword;
- (double)secondPassDuration;
- (id)secondPassResult;
- (void)setAudioDuration:(double)arg1;
- (void)setAudioEnd:(int)arg1;
- (void)setAudioFileURL:(id)arg1;
- (void)setAudioStart:(int)arg1;
- (void)setCost:(float)arg1;
- (void)setDuration:(int)arg1;
- (void)setEnd:(int)arg1;
- (void)setKeyword:(id)arg1;
- (void)setSecondPassDuration:(double)arg1;
- (void)setSecondPassResult:(id)arg1;
- (void)setStart:(int)arg1;
- (void)setThreshold:(float)arg1;
- (void)set_isNbestEntry:(bool)arg1;
- (int)start;
- (float)threshold;
- (id)toJSON;

@end
