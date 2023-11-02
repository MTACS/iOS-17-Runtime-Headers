
@interface AVInterstitialTimeRange : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  __watchCount;
    bool  _active;
    bool  _collapsedInTimeLine;
    bool  _hidden;
    double  _linearPlaybackRequirementDuration;
    AVPlayerInterstitialEvent * _playerInterstitialEvent;
    double  _playingDuration;
    long long  _requiredViewingPolicy;
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
}

@property (setter=_setWatchCount:, nonatomic) unsigned long long _watchCount;
@property (getter=isActive, setter=_setActive:, nonatomic) bool active;
@property (nonatomic) double linearPlaybackRequirementDuration;
@property (setter=_setPlayingDuration:, nonatomic) double playingDuration;
@property (nonatomic) long long requiredViewingPolicy;
@property (readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;

+ (id)interstitialTimeRangeWithPlayerInterstitialEvent:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)_setActive:(bool)arg1;
- (void)_setCollapsedInTimeLine:(bool)arg1;
- (void)_setDurationTimeInterval:(double)arg1;
- (void)_setPlayerInterstitialEvent:(id)arg1;
- (void)_setPlayingDuration:(double)arg1;
- (void)_setWatchCount:(unsigned long long)arg1;
- (unsigned long long)_watchCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithHiddenTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)initWithTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (bool)isActive;
- (bool)isCollapsedInTimeLine;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToInterstitialTimeRange:(id)arg1;
- (bool)isHidden;
- (bool)isSkipped;
- (double)linearPlaybackRequirementDuration;
- (id)playerInterstitialEvent;
- (double)playingDuration;
- (long long)requiredViewingPolicy;
- (void)setLinearPlaybackRequirementDuration:(double)arg1;
- (void)setRequiredViewingPolicy:(long long)arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;

@end
