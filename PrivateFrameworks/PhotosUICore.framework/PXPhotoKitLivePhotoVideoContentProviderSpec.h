
@interface PXPhotoKitLivePhotoVideoContentProviderSpec : NSObject <NSCopying> {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _crossfadeDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _loopStartTime;
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
    }  _loopTimeRange;
    bool  _stabilizeIfPossible;
    bool  _wantsAudio;
}

@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } crossfadeDuration;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } loopStartTime;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } loopTimeRange;
@property (nonatomic) bool stabilizeIfPossible;
@property (nonatomic) bool wantsAudio;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })crossfadeDuration;
- (id)identifier;
- (id)init;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })loopStartTime;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })loopTimeRange;
- (void)setCrossfadeDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setLoopStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setLoopTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setStabilizeIfPossible:(bool)arg1;
- (void)setWantsAudio:(bool)arg1;
- (bool)stabilizeIfPossible;
- (bool)wantsAudio;

@end
