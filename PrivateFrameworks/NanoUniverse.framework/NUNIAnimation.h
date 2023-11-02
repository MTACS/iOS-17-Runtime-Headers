
@interface NUNIAnimation : NSObject {
    <NUNIAnimatable> * _animatable;
    void _ctrl1;
    void _ctrl2;
    float  _delay;
    float  _duration;
    void _from;
    unsigned long long  _function;
    unsigned long long  _key;
    <NUNIAnimationObserver> * _observer;
    float  _pauseTime;
    bool  _paused;
    float  _prevTime;
    bool  _repeat;
    float  _startTime;
    void _to;
    /* Warning: Unrecognized filer type: ']' using 'void*' */ void* _values;
    int  _valuesCount;
}

@property (nonatomic) <NUNIAnimatable> *animatable;
@property (nonatomic) float delay;
@property (nonatomic) float duration;
@property (nonatomic) void from;
@property (nonatomic) unsigned long long function;
@property (nonatomic) unsigned long long key;
@property (nonatomic) <NUNIAnimationObserver> *observer;
@property (getter=isPaused, nonatomic) bool paused;
@property (getter=isRepeat, nonatomic) bool repeat;
@property (nonatomic) float startTime;
@property (nonatomic) void to;

+ (void)generateSlerpKeys:(void *)arg1 times:(void *)arg2 count:(void *)arg3 from:(void *)arg4 to:(void *)arg5; // needs 5 arg types, found 3: /* Warning: Unrecognized filer type: '1' using 'void*' */ void**, float*, int

- (void).cxx_destruct;
- (id)animatable;
- (void)apply:(float)arg1;
- (float)delay;
- (float)duration;
- (void)from;
- (unsigned long long)function;
- (id)initWithAnimatable:(void *)arg1 from:(void *)arg2 to:(void *)arg3 ctrl1:(void *)arg4 ctrl2:(void *)arg5 key:(void *)arg6; // needs 6 arg types, found 2: id, unsigned long long
- (id)initWithAnimatable:(void *)arg1 from:(void *)arg2 to:(void *)arg3 key:(void *)arg4; // needs 4 arg types, found 2: id, unsigned long long
- (id)initWithAnimatable:(void *)arg1 value:(void *)arg2 key:(void *)arg3; // needs 3 arg types, found 2: id, unsigned long long
- (id)initWithAnimatable:(id)arg1 values:(/* Warning: Unrecognized filer type: '2' using 'void*' */ void**)arg2 count:(int)arg3 key:(unsigned long long)arg4;
- (bool)isPaused;
- (bool)isRepeat;
- (unsigned long long)key;
- (id)observer;
- (void)setAnimatable:(id)arg1;
- (void)setDelay:(float)arg1;
- (void)setDuration:(float)arg1;
- (void)setFrom;
- (void)setFunction:(unsigned long long)arg1;
- (void)setKey:(unsigned long long)arg1;
- (void)setObserver:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setRepeat:(bool)arg1;
- (void)setStartTime:(float)arg1;
- (void)setTo;
- (float)startTime;
- (void)to;
- (bool)update:(float)arg1;

@end
