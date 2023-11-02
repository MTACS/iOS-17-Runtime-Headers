
@interface VCPSegment : NSObject {
    float  _curationScore;
    unsigned long long  _numOfFrames;
    unsigned long long  _numOfValidFrames;
    float  _sumOfScore;
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

@property (nonatomic) float curationScore;
@property (nonatomic, readonly) unsigned long long numOfFrames;
@property (nonatomic, readonly) unsigned long long numOfValidFrames;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;

- (void)copyFrom:(id)arg1;
- (float)curationScore;
- (id)init;
- (id)initWithTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 score:(float)arg2 valid:(bool)arg3;
- (bool)isContentTooShort;
- (void)mergeSegment:(id)arg1;
- (unsigned long long)numOfFrames;
- (unsigned long long)numOfValidFrames;
- (float)score;
- (void)setCurationScore:(float)arg1;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (float)sumOfScore;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (void)trimSegment:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 fromStart:(bool)arg2;
- (void)updateDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)updateSegment:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 score:(float)arg2 valid:(bool)arg3;
- (void)updateWithFirstFrame:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 score:(float)arg2 valid:(bool)arg3;

@end
