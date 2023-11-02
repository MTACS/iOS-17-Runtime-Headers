
@interface PXStoryMockAutoEditDecisionList : NSObject <PXStoryAutoEditDecisionList> {
    bool  _allowsNUp;
    NSString * _colorGradeCategory;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _defaultDisplayAssetPresentationDuration;
    long long  _numberOfClips;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _outroDuration;
    struct { 
        long long kind; 
        struct { 
            struct { 
                long long value; 
                int timescale; 
                unsigned int flags; 
                long long epoch; 
            } minimumDuration; 
            struct { 
                long long value; 
                int timescale; 
                unsigned int flags; 
                long long epoch; 
            } preferredDuration; 
            struct { 
                long long value; 
                int timescale; 
                unsigned int flags; 
                long long epoch; 
            } maximumDuration; 
        } specificDurationInfo; 
    }  _overallDurationInfo;
    <PXAudioAsset> * _song;
}

@property (nonatomic, readonly) bool allowsNUp;
@property (nonatomic, readonly) NSString *colorGradeCategory;
@property (nonatomic, readonly) NSString *decisionPapertrail;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } defaultDisplayAssetPresentationDuration;
@property (nonatomic, readonly) NSString *diagnosticDescription;
@property (nonatomic, readonly) long long numberOfClips;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } outroDuration;
@property (nonatomic, readonly) struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_2_1_3; } x2; } overallDurationInfo;
@property (nonatomic, readonly) <PXAudioAsset> *song;

- (void).cxx_destruct;
- (bool)allowsNUp;
- (id)clipAtIndex:(long long)arg1;
- (id)clipForDisplayAsset:(id)arg1;
- (id)colorGradeCategory;
- (id)decisionPapertrail;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })defaultDisplayAssetPresentationDuration;
- (id)diagnosticDescription;
- (void)enumerateClipsUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithSong:(id)arg1;
- (long long)numberOfClips;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })outroDuration;
- (struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_2_1_3; } x2; })overallDurationInfo;
- (id)song;

@end
