
@interface FlexTestingContext : NSObject {
    long long  _maxPassesToFit;
    long long  _maxSilenceDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _maxSilenceDurationTime;
    double  _maxSilencePercentage;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _maxSilencePercentageTime;
    long long  _maxSilenceUnderSetDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _maxSilenceUnderSetDurationTime;
    long long  _minOutroDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _minOutroDurationTime;
    NSCountedSet * _removedConflicts;
    bool  _sequencingLongSong;
    bool  _timedOut;
    bool  _usingPreventedIntro;
    bool  _usingPreventedOutro;
}

@property (nonatomic) long long maxPassesToFit;
@property (nonatomic) long long maxSilenceDuration;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } maxSilenceDurationTime;
@property (nonatomic) double maxSilencePercentage;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } maxSilencePercentageTime;
@property (nonatomic) long long maxSilenceUnderSetDuration;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } maxSilenceUnderSetDurationTime;
@property (nonatomic) long long minOutroDuration;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } minOutroDurationTime;
@property (nonatomic, retain) NSCountedSet *removedConflicts;
@property (nonatomic) bool sequencingLongSong;
@property (nonatomic) bool timedOut;
@property (nonatomic) bool usingPreventedIntro;
@property (nonatomic) bool usingPreventedOutro;

- (void).cxx_destruct;
- (id)init;
- (long long)maxPassesToFit;
- (long long)maxSilenceDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxSilenceDurationTime;
- (double)maxSilencePercentage;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxSilencePercentageTime;
- (long long)maxSilenceUnderSetDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxSilenceUnderSetDurationTime;
- (long long)minOutroDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minOutroDurationTime;
- (id)removedConflicts;
- (bool)sequencingLongSong;
- (void)setMaxPassesToFit:(long long)arg1;
- (void)setMaxSilenceDuration:(long long)arg1;
- (void)setMaxSilenceDurationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMaxSilencePercentage:(double)arg1;
- (void)setMaxSilencePercentageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMaxSilenceUnderSetDuration:(long long)arg1;
- (void)setMaxSilenceUnderSetDurationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMinOutroDuration:(long long)arg1;
- (void)setMinOutroDurationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setRemovedConflicts:(id)arg1;
- (void)setSequencingLongSong:(bool)arg1;
- (void)setTimedOut:(bool)arg1;
- (void)setUsingPreventedIntro:(bool)arg1;
- (void)setUsingPreventedOutro:(bool)arg1;
- (bool)timedOut;
- (bool)usingPreventedIntro;
- (bool)usingPreventedOutro;

@end
