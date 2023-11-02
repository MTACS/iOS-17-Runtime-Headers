
@interface PXVideoStabilizeOperationSpec : PXVideoProcessingOperationSpec {
    bool  _abortIfStabilizationFails;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _crossfadeDuration;
    bool  _performStabilization;
    PXVideoStabilizationRecipeSource * _recipeSource;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _startTime;
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
    bool  _wantsAudio;
}

@property (nonatomic) bool abortIfStabilizationFails;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } crossfadeDuration;
@property (nonatomic) bool performStabilization;
@property (nonatomic, retain) PXVideoStabilizationRecipeSource *recipeSource;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } startTime;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;
@property (nonatomic) bool wantsAudio;

- (void).cxx_destruct;
- (bool)abortIfStabilizationFails;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })crossfadeDuration;
- (bool)performStabilization;
- (id)recipeSource;
- (void)setAbortIfStabilizationFails:(bool)arg1;
- (void)setCrossfadeDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPerformStabilization:(bool)arg1;
- (void)setRecipeSource:(id)arg1;
- (void)setStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setWantsAudio:(bool)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })startTime;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (bool)wantsAudio;

@end
