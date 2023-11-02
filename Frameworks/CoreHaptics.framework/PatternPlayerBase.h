
@interface PatternPlayerBase : NSObject <PatternPlayerDetails> {
    CHHapticEngine * _engine;
    NSArray * _events;
    int  _muteState;
    double  _patternDuration;
    NSString * _patternID;
    unsigned char  _previousAction;
}

@property CHHapticEngine *engine;
@property (readonly) double patternDuration;
@property (readonly) NSString *patternID;

- (void).cxx_destruct;
- (id)engine;
- (bool)needsResetForAction:(unsigned char)arg1;
- (double)patternDuration;
- (id)patternID;
- (void)setEngine:(id)arg1;

@end
