
@interface AVCaptureReactionEffectState : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _endTime;
    NSString * _reactionType;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _startTime;
}

@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } endTime;
@property (nonatomic, readonly) NSString *reactionType;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } startTime;

- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })endTime;
- (id)initFromDictionary:(id)arg1;
- (id)initWithReactionType:(id)arg1 startTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)initWithReactionType:(id)arg1 startTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 endTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (id)reactionType;
- (void)setEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })startTime;

@end
