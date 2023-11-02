
@interface PXVideoContentProviderLoadingResult : NSObject {
    NSError * _error;
    AVPlayerItem * _playerItem;
    long long  _priority;
    NSString * _resultDebugDescription;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _timeRange;
    PFSlowMotionTimeRangeMapper * _timeRangeMapper;
    NSURL * _url;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) AVPlayerItem *playerItem;
@property (nonatomic, readonly) long long priority;
@property (nonatomic, readonly) NSString *resultDebugDescription;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;
@property (nonatomic, readonly) PFSlowMotionTimeRangeMapper *timeRangeMapper;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)description;
- (id)error;
- (id)initWithPlayerItem:(id)arg1 url:(id)arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 timeRangeMapper:(id)arg4 error:(id)arg5 priority:(long long)arg6 description:(id)arg7;
- (id)playerItem;
- (long long)priority;
- (id)resultDebugDescription;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (id)timeRangeMapper;
- (id)url;

@end
