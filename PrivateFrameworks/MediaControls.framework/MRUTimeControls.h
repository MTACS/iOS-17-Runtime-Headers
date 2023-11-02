
@interface MRUTimeControls : NSObject {
    struct { 
        double snapshotTime; 
        double startTime; 
        double endTime; 
        double duration; 
        double elapsedDuration; 
        float rate; 
        float defaultRate; 
        bool isLiveContent; 
        bool isLoading; 
    }  _durationSnapshot;
    bool  _isEnabled;
    bool  _isLive;
    NSString * _liveText;
    bool  _scrubbable;
    <MPCPlayerSeekCommand> * _seekCommand;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic) struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; bool x8; bool x9; } durationSnapshot;
@property (nonatomic) double elapsedTime;
@property (nonatomic, readonly) bool isEnabled;
@property (nonatomic, readonly) bool isLive;
@property (nonatomic, readonly, copy) NSString *liveText;
@property (nonatomic, readonly) float rate;
@property (nonatomic, readonly) bool scrubbable;
@property (nonatomic, retain) <MPCPlayerSeekCommand> *seekCommand;
@property (nonatomic, readonly) double startTime;

- (void).cxx_destruct;
- (id)description;
- (double)duration;
- (struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; bool x8; bool x9; })durationSnapshot;
- (double)elapsedTime;
- (double)elapsedTimeForDate:(id)arg1;
- (id)init;
- (id)initWithResponseItem:(id)arg1;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isLive;
- (id)liveText;
- (float)rate;
- (bool)scrubbable;
- (id)seekCommand;
- (void)setDurationSnapshot:(struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; bool x8; bool x9; })arg1;
- (void)setElapsedTime:(double)arg1;
- (void)setSeekCommand:(id)arg1;
- (double)startTime;

@end
